void fun(int n){
    if(n>0){
        ///Calling: this will execute in calling time
        fun(n-1); //if anything remain here will execute at return time
        //Returning: this will execute at returning time
    }
}