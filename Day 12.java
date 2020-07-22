
//Day12(Inheritance)
class Student extends Person{
	private int[] testScores;

    /*	
    *   Class Constructor
    *   
    *   @param firstName - A string denoting the Person's first name.
    *   @param lastName - A string denoting the Person's last name.
    *   @param id - An integer denoting the Person's ID number.
    *   @param scores - An array of integers denoting the Person's test scores.
    */
    public Student(String firstName, String lastName, int id, int[] testScores) {
            // TODO Auto-generated constructor stub
          super(firstName, lastName, id);
              this.testScores=testScores;
             
        }
    // Write your constructor here

    /*	666666666666666666666666666666666666666666666666666666666666666
    *   Method Name: calculate
    *   @return A character denoting the grade.
    */
    // Write your method here
    public char calculate(){
     int sum=0,total;
    char ch='O';
    for(int i=0; i<testScores.length; i++){
        sum = sum + testScores[i];
    }
    total=sum/testScores.length;
    return(total> 89 ?'O': total>79 ? 'E' : total > 69 ? 'A' : total > 54 ? 'P' :total > 39 ? 'D' : 'T' );
   
    }
}

