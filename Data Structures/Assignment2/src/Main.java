import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Main {
	public static void main(String[] args) {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StackCalculator calc = new StackCalculator();
		while (true) {
			try {
				String infix = br.readLine();
				if (infix.equals("Q") || infix.equals("q")) {
					break;
				} else {
					calc.calculate(infix);
				}
			} catch (Exception e) {
				System.out.println("Wrong Expression!");
			}
		}
	}
}

class StackCalculator {
	public long calculate(String infix) throws Exception {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		try {
			tempoperator.changer(infix);
			System.out.println(oprand.compute(numArr));
			tempoperator.clear();
		} catch (Exception e) {
			result.setLength(0);
			throw new Exception();
		}
		return 0;
	}

	LinkedList<Character> infixlist = new LinkedList<>();
	StringBuilder result = new StringBuilder("");
	newStack tempoperator = new newStack();
	String PostFix = "";
	String[] numArr;

	LinkedList<Integer> oprandlist = new LinkedList<>();
	opStack oprand = new opStack();
	newStack operator = new newStack();

	class opStack {
		public void clear() {
			oprandlist.clear();
		}

		public int pop() {
			int op = oprandlist.getLast();
			oprandlist.removeLast();
			return op;
		}

		public void push(int data) {
			oprandlist.addLast(data);
		}

		public int top() {
			return oprandlist.getLast();
		}

		public boolean isEmpty() {
			if (oprandlist.size() == 0)
				return true;
			else
				return false;
		}

		public int size() {
			return oprandlist.size();
		}

		public int compute(String[] numArr) throws Exception { // 후위 연산 계산하기
			for (int j = 0; j < numArr.length; j++) { // 숫자만 스택에 집어넣기

				try { // parseInt가 예외일 때는 연산자입니다.
					oprand.push(Integer.parseInt(numArr[j]));
				} catch (NumberFormatException e) {
					if (numArr[j].equals("$")) {
						int op1 = oprand.pop();
						oprand.push(-op1);
					} else {
						int op1 = oprand.pop();
						int op2 = oprand.pop();
						if (numArr[j].equals("^")) {
							int power = op2;
							if (op1 == 0) {
								oprand.push(1);
							} else if (op1 < 0) {
								oprand.push(0);
							} else {
								for (int k = 1; k < op1; k++) {
									op2 *= power;
								}
								oprand.push(op2);
							}
						} else if (numArr[j].equals("+")) {
							oprand.push(op2 + op1);
						} else if (numArr[j].equals("-")) {
							oprand.push(op2 - op1);
						} else if (numArr[j].equals("*")) {
							oprand.push(op2 * op1);
						} else if (numArr[j].equals("/")) {
							oprand.push(op2 / op1);
						} else if (numArr[j].equals("%")) {
							oprand.push(op2 % op1);
						}
					}
				}
			}
			String fPostFix = PostFix.replace("^", "**");
			System.out.println(fPostFix); // 후위식 출력
			result.setLength(0);
			// 연산 예외시 후위식이 표기되지 않아야 하므로 예외 이후인 이곳에 print하였습니다
			int result = oprand.pop();
			return result;
		}
	}

	class newStack {
		public void clear() {
			infixlist.clear();
		}

		public char pop() {
			char op = infixlist.getLast();
			infixlist.removeLast();
			return op;
		}

		public void push(char data) {
			infixlist.addLast(data);
		}

		public char top() {
			return infixlist.getLast();
		}

		public boolean isEmpty() {
			if (infixlist.size() == 0)
				return true;
			else
				return false;
		}

		public int size() {
			return infixlist.size();
		}

		public int priority(char op) { // 우선순위 계산
			if (op == '(')
				return 1;
			else if (op == '+' || op == '-')
				return 2;
			else if (op == '/' || op == '*' || op == '%' || op == '/' || op == '$')
				return 3;
			else if (op == '^') // **가 입력되었을 경우 postfix 식이 아닌 곳에 ^로 저장 후 연산, 나중에 replaceAll("^","**")로 바꾸기
				return 4;
			else
				return 0;
		}

		void changer(String infix) throws Exception { // Change infix to postfix
			int digitcount = 0;
			int n = 0;
			StringBuilder sb = new StringBuilder();
			String infixa = infix.replaceAll(" ", "");
			if (infixa.contains("***")) { // *가 3개 이상 연속되면 Wrong Expression
				throw new Exception();
			}

			for (int m = 0; m < infix.length(); m++) {
				sb.append(infix.charAt(m));
			}
			for (int j = 0; j < infix.length(); j++) { // * 연산자와 ** 연산자의 구별
				int k;

				if (infix.charAt(j) == '*') {
					if (infix.charAt(j + 1) == '*') {
						j = j + 1;
					} else {
						for (k = 2; k + j < infix.length(); k++) {
							if (infix.charAt(j + k) == '*') {
								sb.deleteCharAt(j + k - n);
								j = j + k + 1;
								n += 1;
								break;
							} else {
								continue;

							}
						}
					}
				}
			}
			infix = sb.toString();
			for (int i = 0; i < infix.length(); i++) { // String Scan
				char temp;
				infix = infix.replaceAll("\t", "");
				infix = infix.replaceAll(" ", ""); // 공백 및 탭 삭제
				temp = infix.charAt(i);
				if (Character.isDigit(temp)) { // if Number
					result.append(temp);
					digitcount++;
				} else { // if Operator
					if (digitcount != 0 && Character.isDigit(infix.charAt(i - 1))) {
						result.append(" ");
					}
					if (temp == '(') {
						tempoperator.push(temp);
					} else if (temp == ')') {
						if (digitcount == 0)
							throw new Exception();
						else {
							while (tempoperator.size() != 0) {
								char newtemp = tempoperator.pop();
								if (newtemp == '(')
									break;
								else {
									result.append(newtemp);
									if (!(infix.length() == i + 1))
										result.append(' ');
								}
							}
						}
					} else if (temp == '*') {
						if (temp == infix.charAt(i + 1)) {
							tempoperator.push('^');
							i++;
						} else {
							while (tempoperator.size() != 0 && (priority(tempoperator.top()) >= priority(temp))) {
								result.append(tempoperator.pop());
								result.append(" ");
							}
							tempoperator.push(temp);
						}
					} else if (temp == '-') {
						if (digitcount == 0) {
							tempoperator.push('$');
						} else if (!Character.isDigit(infix.charAt(i - 1))) {
							tempoperator.push('$');

						} else {
							while (tempoperator.size() != 0 && (priority(tempoperator.top()) >= priority(temp))) {
								result.append(tempoperator.pop());
								result.append(" ");
							}
							tempoperator.push(temp);
						}

					} else if (temp == '+' || temp == '%' || temp == '/') {
						while (tempoperator.size() != 0 && (priority(tempoperator.top()) >= priority(temp))) {
							result.append(tempoperator.pop());
							result.append(" ");
						}
						tempoperator.push(temp);
					} else { // 잘못된 입력 시 초기화
						tempoperator.clear();
						result.setLength(0);
						throw new Exception();
					}
				}
			}
			while (tempoperator.size() != 0) {
				result.append(" ");
				result.append(tempoperator.pop());
			}
			PostFix = result.toString();
			numArr = PostFix.split(" "); // 공백으로 나눈 문자열 배열에 저장(Stack의 각 요소)
		}
	}
}