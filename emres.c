int main(){
	
int StudentNumber[15];//use your real student number

int i=0, k,ReadNum;

printf("\n Please Enter your Student Number then press enter button: ");

while(1){

ReadNum = getch(); //get the student number one digit each time

if(ReadNum == 13) break; 

putchar(ReadNum);

// put the student number in the StudentNumber] Array

StudentNumber[i] = (int) (ReadNum-'0');
i++;
}

Fun1(StudentNumber, 0, i-1);
	
printf("\n The Array after Fun1 \n");
	
for(k = 0; k<i; k++){
printf("%d", StudentNumber[k]);
}
return 0;

}
void swap(int *array, int leftindex, int rightIndex){

int temp;

if(array[leftindex]<array[rightIndex]){

temp = array[leftindex]; 
array[leftindex] = array[rightIndex];
array[rightIndex] = temp;
}
}

void Fun1(int *array, int leftindex, int rightIndex){

if(leftindex < rightIndex){

swap(array, leftindex, rightIndex);
Fun1(array, leftindex+1, rightIndex-1);
}
}














