int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    int result = 0;
    for (int i = 0; i < pointsSize-1; i++) {
        int offset_x = abs(points[i+1][0]-points[i][0]);
        int offset_y = abs(points[i+1][1]-points[i][1]);
        result += offset_x>offset_y?offset_x:offset_y;
    }
    return result;
}