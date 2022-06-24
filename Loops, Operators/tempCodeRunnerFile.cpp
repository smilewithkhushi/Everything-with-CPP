    int n=3;
    while (n<=num){
        int sum=t1+t2;
        cout<<setw(4)<<sum;
        t1=t2;
        t2=sum;
        n++;
    }
