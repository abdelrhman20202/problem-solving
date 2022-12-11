int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime)
{
int i;
int n=0;
for(i=0;i<startTimeSize;i++)
{
    if(queryTime>=startTime[i]&& queryTime<=endTime[i])
    {
    n++;
    }
}
return n;
}