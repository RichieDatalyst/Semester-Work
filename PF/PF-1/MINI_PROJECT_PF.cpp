#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

void B_Sort(int a[], int s){
    for(int i = 0; i< s-1; i++){
        for(int j= 0; j< s-2-i; j++){
            if(a[j] < a[j+1]){
                int T = a[j];
                a[j] = a[j+1];
                a[j+1] = T;
            }
        }
    }
}

struct PGMImage{
    int H, W, MaxGray;
    string Comment;
    string MagicNo;
    vector<vector<int> > ImageData;

    PGMImage(){
        cout<<"Called Automatically"<<endl;
        H = W = MaxGray = -1;
    }

    void Create(vector<vector<int> >& Img, int H, int W){
        Img = vector<vector<int> >(H);
        for(int i = 0; i< H; i++)
            Img[i] = vector<int>(W);
        return;
    }

    bool ReserveMemory(){
        // Code to create memory storage for the image
        // This code assumes that H and W have been set earlier
        cout<<W<<" "<<H<<endl;
        if(H < 0 || W < 0)
            return false;
        Create(ImageData, H, W);
        return true;
    }

    bool LoadImage(char FileName[]){
        // Code to open File, Reserve Memory and load image data in memory
        ifstream FIN(FileName);
        if(! FIN.is_open())
            return false;

        getline(FIN, MagicNo);
        getline(FIN, Comment); // reading the comment. PROBLEM HERE THE COMMENTIS OPTIONAL

        FIN >> W >> H >> MaxGray;
        if( !ReserveMemory()){
            FIN.close();
            return false;
        }

        for(int r = 0; r < H; r++){
            for(int c = 0; c < W; c++){
                FIN >> ImageData[r][c];
            }
        }

        FIN.close();
        return true;
    }

    bool SaveImage(char FileName[]){
        // Code to open File, Reserve Memory and load image data in memory
        if(H < 0)
            return false;

        ofstream FOUT(FileName);
            // Your Code to check if the file has been created for output
            // If File not created then return false

        FOUT << "P2" <<endl
             << "# Created By Usman and Abdullah from BDS-A"<<endl
             << W <<" " <<H<<endl
             <<MaxGray<<endl;

        for(int r = 0; r < H; r++){
            for(int c = 0; c < W; c++){
                FOUT << ImageData[r][c]<<" ";
            }
            FOUT << endl;
        }
        FOUT.close();
        return true;
    }

    bool Create_Negative(){
        if(H < 0)
            return false;
        for(int r = 0; r < H; r++){
            for(int c = 0; c < W; c++)
                ImageData[r][c] = MaxGray - ImageData[r][c];
        }
        return true;
    }

    bool Mean_Filter(int FilterSize=3){
        // create a new image in memory
        // apply median filter and then copy the result
        // back to the same image
        if(H < 0)
            return false;
        vector<vector<int> > Temp;
        Create(Temp, H, W);
        for(int r = 0; r < H; r++){
            for(int c = 0; c < W ; c++){
                int k = 0;
                int SUM = 0;
                for(int i=r-FilterSize/2; i< r+FilterSize/2; i++){
                    for(int j= c-FilterSize/2; j< c+FilterSize/2; j++){
                        if(i >=0 && i < H && j >= 0 && j < W){
                            SUM+= ImageData[i][j];
                            k++;
                        }
                    }
                }
                Temp[r][c] = SUM/k;
            }
        }
        for(int r = 0; r < H; r++){
            for(int c = 0; c < W ; c++){
                ImageData[r][c] = Temp[r][c];
            }
        }
    }

    bool Median_Filter(int FilterSize=3){
        // create a new image in memory
        // apply median filter and then copy the result
        // back to the same image
        if(H < 0)
            return false;
        vector<vector<int> > Temp;
        Create(Temp, H, W);
        int D[100];
        for(int r = 0; r < H; r++){
            for(int c = 0; c < W ; c++){
                int k = 0;
                for(int i=r-FilterSize/2; i< r+FilterSize/2; i++){
                    for(int j= c-FilterSize/2; j< c+FilterSize/2; j++){
                        if(i >=0 && i < H && j >= 0 && j < W){
                            D[k] = ImageData[i][j];
                            k++;
                        }
                    }
                }
                B_Sort(D, k);
                Temp[r][c] = D[k/2];
            }
        }
        for(int r = 0; r < H; r++){
            for(int c = 0; c < W ; c++){
                ImageData[r][c] = Temp[r][c];
            }
        }
        return true;
    }

    bool Rotate(double angle){
    	
    	vector<vector<int> > Temp;
        Create(Temp, H, W);
        
             for(int r = 0; r < H; r++){
          		  for(int c = 0; c < W ; c++){
          		  	int newr = r * cos (angle) + c * sin ( angle );
          		  	int newc = -r* sin(angle) + c*cos(angle);
          		  		if ( newr > 0 && newr < H && newc > 0 && newc < W )
          		  	Temp[r][c] = ImageData[newr][newc];
          		  }
          	}
    	 for(int r = 0; r < H; r++){
            for(int c = 0; c < W ; c++){
                ImageData[r][c] = Temp[r][c];
            }
        }
    	
        return true;
    }

    bool RotateClockwise(){
        for(int i=0; i<H; i++){
	      for(int j=i+1; j<W/2; j++){
             swap(ImageData[i][j],ImageData[j][i]);
             for(int i=0; i<H; i++){
                    int l=0,h=W-1;
             while(l<h){
                swap(ImageData[i][l],ImageData[i][h]);
                l++;
                h--;
             }
             }
	      }
    	}
    	        return true;
    }
    bool RotateCounterClockwise(){
    	for(int i=0; i<H; i++){
	      for(int j=i+1; j<W; j++){
             swap(ImageData[i][j],ImageData[j][i]);
             for(int i=0; i<W; i++){
                    int l=0,h=H-1;
             while(l<h){
                swap(ImageData[l][i],ImageData[h][i]);
                l++;
                h--;
             }
             }
	      }
    	}

        return true;
    }

    bool FlipHorizontal(){
        if(H<0){
            return false;
        }
        for(int i=0; i<H/2; i++){
            int s=0,e=W-1;
            while(s<e){
                swap(ImageData[i][s],ImageData[i][e]);
                s++;
                e--;
            }
        }
            	return true;
        }
    bool FlipVertical(){
    	if(H<0){
            return false;
        }
        for(int i=0; i<H/2; i++){
            int l=0,h=H+1;
            while(l<h){
                swap(ImageData[l][i],ImageData[h+l][i]);
                l++;
                h--;
            }
        }
        return true;
    }
    bool Resize(int NewH, int NewW){
     double x = (double)H / NewH;
    double y = (double)W / NewW;
    for (double i = 0, ii = 0; i < H; i += x, ii++){
        for (double j = 0, jj = 0; j < W; j += y, jj++){
            int I = i, a = ii;
            int J = j, b = jj;
            ImageData[a][b] = ImageData[I][J];
        }
    }	
            	return true;
        }
    bool CropImage(int Left, int Top, int Right, int Bottom){
    if (Top < 0 || Left < 0 || Bottom > H || Right > W){
        cout << "Invalid Response!";
        return 0;
    }
    int  x, y;
    for(int i = 0, x = Top; x < Bottom; i++, x++){
        for(int j = 0, y = Left; y < Right; j++, y++){
            ImageData[i][j] = ImageData[x][y];
    }
    }
        return true;
    }
};
int Menu(){
    int choice;
    do{
        cout<<endl<<"1. Load Image"<<endl
        <<"2. Save Image"<<endl
        <<"__________________________"<<endl
        <<"3. Create Negative Image"<<endl
        <<"__________________________"<<endl
        <<"4. Mean Filter"<<endl
        <<"5. Median Filter"<<endl
        <<"__________________________"<<endl
        <<"6. Flip Horizontal"<<endl
        <<"7. Flip Vertical"<<endl
        <<"8. Rotate Clockwise By 90 Degree"<<endl
        <<"9. Rotate Counter Clockwise By 90 Degree"<<endl
        <<"10. Rotate By Arbitrary Angle"<<endl
        <<"11. Resize Image"<<endl
        <<"12. Crop Image"<<endl
        <<"__________________________"<<endl
        <<"13. Exit"<<endl<<endl
        <<"Enter Your Choice: ";
        cin>> choice;
    } while(choice < 1 || choice > 13);
}

int main(){
    PGMImage Image;
    char FileName[100];
    int Choice;
    do{
        Choice = Menu();
        if(Choice == 1){
            cout<<"Enter File Name ";
            cin>>FileName;
            if(Image.LoadImage(FileName) )
               cout<<"Image Loaded Successfully "<<endl;
            else
                cout<<"Image Not Loaded Successfully "<<endl;
        }
        else if(Choice == 2){
            cout<<"Enter File Name ";
            cin >> FileName;
            if(Image.SaveImage(FileName) )
               cout<<"Image Saved Successfully "<<endl;
            else
                cout<<"Image Not Saved Successfully "<<endl;

        }
        else if(Choice == 3){
            if(Image.H < 0)
                cout<<"No Image Loaded"<<endl;
            else
                Image.Create_Negative();
        }
        else if(Choice == 4){
            Image.Mean_Filter(5);
        }
        else if(Choice == 5){
            int S;
            cout<<"Filter Size ";
            cin>> S;
            Image.Median_Filter(S);
        }
        else if(Choice == 6){
        }
        else if(Choice == 7){
        }
        else if(Choice == 8){
        }
        else if(Choice == 9){
        }
        else if(Choice == 10){
        	   if(Image.H < 0)
                cout<<"No Image Loaded"<<endl;
            else
            	cout << " Please Enter Your Angle " ; 
            	double a;
            	cin >> a;
            	a=a*3.1415/180 ;
                Image.Rotate(a);
        }
        else if(Choice == 11){
        }
        else if(Choice == 12){
        }
    }while(Choice != 13);
    return 0;
}

