import java.io.*;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {

		DepartmentLinkedList attendance_list = new DepartmentLinkedList();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		while (true) {
			try {
				StringTokenizer st = new StringTokenizer(br.readLine());
				String option = st.nextToken();
				option = option.toUpperCase();

				if (option.equals("Q")) {
					break;
				} else if (option.equals("P")) {
					attendance_list.PrintAll();
				} else if (option.equals("I")) {
					String department = st.nextToken();
					String student_name = st.nextToken();
					String student_id = st.nextToken();
					attendance_list.insertOrdered(department, student_name, student_id);
				} else if (option.equals("D")) {
					String department = st.nextToken();
					String student_id = st.nextToken();
					attendance_list.delete(department, student_id);
				}
			} catch (Exception e) {
				System.out.println("잘못된 입력입니다. I,D,P,Q 네가지 옵션 중 하나를 선택하고, 올바른 인자를 입력하세요. 오류 : " + e.toString());
			}
		}
	}
}

class DepartmentLinkedList {

	private final LinkedList<Department> departments;
	private int size = 0;

	public DepartmentLinkedList() {
		departments = new LinkedList<>();
	}

	public void insertOrdered(String department, String student_name, String student_id) {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		Node<Department> current = departments.head;
		Department currentDepartment = null;
		Department newDepartment = new Department(department);
		Node<Department> newNode = new Node<>(newDepartment);
		if (departments.head == null) { // head 노드가 존재하지 않을 때
			departments.head = newNode;
			currentDepartment = newDepartment;
		} else {
			currentDepartment = current.element;
			if (department.compareTo(currentDepartment.getName()) < 0) { // 부서 이름이 head 노드의 부서 이름보다 앞 순서인 경우
				current = newNode;
				current.next = departments.head;
				departments.head = current;
				currentDepartment = newDepartment;
			} else {
				Node<Department> previous = departments.head;
// 부서 이름이 현재 노드의 부서 이름보다 뒷 순서인 경우 끝까지 또는 앞 순서가 될 때까지 탐색
				while (current != null && department.compareTo(current.element.getName()) >= 0) {
					previous = current;
					current = current.next;
				}
				Department previousDepartment = previous.element;
				if (previousDepartment.getName().equals(department)) { // 부서 이름이 이전 노드의 부서이름과 동일한 경우
					currentDepartment = previousDepartment;
				} else { // 부서 이름이 이전 노드보다 뒷 순서인 경우
					previous.next = newNode;
					newNode.previous = previous;
					if (current != null) {
						current.previous = newNode;
						newNode.next = current;
					}
					currentDepartment = newDepartment;
				}
			}
		}
		StudentLinkedList students = currentDepartment.getStudentLinkedList();
		students.insertOrdered(student_name, student_id);
		size++;
	}

	public void delete(String department, String student_id) {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		Node<Department> current = departments.head;
		if (current == null) { // 학과 정보가 없으면 아무것도 안 함
			return;
		}
		Department currentDepartment = null;
		while (current != null) {
			currentDepartment = current.element;
			if (currentDepartment.getName().equals(department)) { // 학과 정보가 일치하면 반복문 종료
				break;
			}
			current = current.next;
		}
		if (current == null) { // 일치하지 않으면 아무것도 안 함
			return;
		}
		StudentLinkedList students = currentDepartment.getStudentLinkedList();
		students.delete(student_id);
		size--;
	}

	public void PrintAll() {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		if (isEmpty()) {
			System.out.println("Empty!");
			return;
		}
		Node<Department> current = departments.head;
		while (current != null) {
			Department department = current.element;
			StudentLinkedList students = department.getStudentLinkedList();
			students.PrintAll(department.getName());
			current = current.next;
		}
		System.out.println("End!");
	}

	private boolean isEmpty() {
		return size == 0;
	}
}

class StudentLinkedList {

	private final LinkedList<Student> students;

	public StudentLinkedList() {
		students = new LinkedList<>();
	}

	public void insertOrdered(String student_name, String student_id) {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		Node<Student> current = students.head;
		Student currentStudent = null;
		Student newStudent = new Student(student_name, student_id);
		Node<Student> newNode = new Node<>(newStudent);
		if (students.head == null) { // head 노드가 존재하지 않을 때
			students.head = newNode;
			return;
		}

		currentStudent = current.element;
		if (Integer.compare(Integer.parseInt(student_id), currentStudent.getStudentId()) < 0) { // 학번이 head 노드의 학번보다 앞
																								// 순서인 경우
			current = newNode;
			current.next = students.head;
			students.head = current;
		} else {
			Node<Student> previous = students.head;
// 학번이 현재 노드의 학번보다 앞 순서가 될 때까지(또는 끝까지) 탐색
			while (current != null
					&& Integer.compare(Integer.parseInt(student_id), current.element.getStudentId()) >= 0) {
				previous = current;
				current = current.next;
			}
			Student previousStudent = previous.element;
			if (previousStudent.getStudentId() == Integer.parseInt(student_id)) { // 학번이 이전 노드의 학번과 동일한 경우
				return; // 아무것도 안 함
			}
// 학번이 이전 노드의 학번보다 뒷 순서인 경우
			previous.next = newNode;
			newNode.previous = previous;
			if (current != null) {
				current.previous = newNode;
				newNode.next = current;
			}
		}
	}

	public void delete(String student_id) {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		Node<Student> current = students.head;
		if (current == null) { // 학생 정보가 없으면 아무것도 안 함
			System.out.println("Empty!");
			return;
		}
// head 노드의 학번과 일치하면 헤드를 다음 노드로 변경해줌
		if (current.element.getStudentId() == Integer.parseInt(student_id)) {
			students.head = current.next;
			return;
		}
		Node<Student> previous = null;
// 일치할 때까지 탐색
		while (current != null && current.element.getStudentId() != Integer.parseInt(student_id)) {
			previous = current;
			current = current.next;
		}
		if (current == null) { // 일치하지 않으면 아무것도 안 함
			return;
		}
		if (previous != null) {
			previous.next = current.next;
		}
		if (current.next != null) {
			current.next.previous = previous;
		}
	}

	public void PrintAll(String department) {
		/* ################ IMPLEMENT YOUR CODES HERE##################### */
		Node<Student> current = students.head;
		while (current != null) {
			Student student = current.element;
			System.out.printf("(%s, %s, %d)\n", department, student.getStudentName(), student.getStudentId());
			current = current.next;
		}
	}
}

class Department {
	private final String name;
	private final StudentLinkedList studentLinkedList;

	public Department(String name) {
		this.name = name;
		this.studentLinkedList = new StudentLinkedList();
	}

	public String getName() {
		return name;
	}

	public StudentLinkedList getStudentLinkedList() {
		return studentLinkedList;
	}
}

class Student {
	private final String studentName;
	private final int studentId;

	public Student(String studentName, String studentId) {
		this.studentName = studentName;
		this.studentId = Integer.parseInt(studentId);
	}

	public String getStudentName() {
		return studentName;
	}

	public int getStudentId() {
		return studentId;
	}
}

class LinkedList<E> {
	Node<E> head, tail;
	int size = 0;

	public LinkedList() {}

	//Override toString() to return elements in the list

	public String toString() {
		StringBuilder result = new StringBuilder("[");
		Node<E> current = head;
		while (current != null) {
			result.append(current.element);
			current = current.next;
			if (current != null) {
				result.append(", ");
			} else {
				result.append("]");
			}
		}
		return result.toString();
	}
	
	public void clear() {
		size = 0;
		head = tail = null;
	}

	public int size() {
		return size;
	}
}

class Node<E> {
	E element;
	Node<E> previous;
	Node<E> next;

	public Node(E element) {
		this.element = element;
	}
}