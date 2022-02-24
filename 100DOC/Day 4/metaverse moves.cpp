int isPossibleToReach(int x1, int y1, int x2, int y2, int x, int y) {
    // Write your code here.
    int xdis = abs(x2-x1);
    int ydis = abs(y2-y1);
    
    if((xdis <= x) && (ydis <= y)){
        return 1;
    }
    else{
        return 0;
    }
}
