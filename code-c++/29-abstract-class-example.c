// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

class Plugin{
	public:
            void apply_filter(int img[5][5]){
			//what does a filter does?.... we can't say
			cout<<"Function apply_filter for Plugin called...Doing nothing"<<endl;
		}

// 		virtual void apply_filter(int img[5][5]){
// 			//what does a filter does?.... we can't say
// 			cout<<"Function apply_filter for Plugin called...Doing nothing"<<endl;
// 		}

        //pure virtual
    // 	virtual void apply_filter(int img[5][5]) = 0;

};

class MakeItWhite : public Plugin{
	public:
		//override
		void apply_filter(int img[5][5]){
			for(int i=0; i < 5; i++){
				for(int j=0; j< 5; j++){
					img[i][j] = 255;
				}
			}
		}
};

class MakeItBlack : public Plugin{
	public:
		//override
		void apply_filter(int img[5][5]){
			for(int i=0; i < 5; i++){
				for(int j=0; j< 5; j++){
					img[i][j] = 0;
				}
			}
		}
};

void init_matrix(int a[5][5]);
void out_matrix(int a[5][5]);
Plugin* select_plugin(string arg);

int main() {
    int pic[5][5];

	init_matrix(pic);

	cout<<"Before "<<endl;
	out_matrix(pic);

	Plugin p;
	p.apply_filter(pic);

	cout<<"After Plugin apply_filter "<<endl;
	out_matrix(pic);

	MakeItWhite miw;
	miw.apply_filter(pic);

	cout<<"After MakeItWhite apply_filter "<<endl;
	out_matrix(pic);

	MakeItBlack mib;
	mib.apply_filter(pic);

	cout<<"After MakeItBlack apply_filter "<<endl;
	out_matrix(pic);
	cout<<"//////////////////////////////////////////////////////"<<endl;
	cout<<"//////////////////////////////////////////////////////"<<endl;
	cout<<"//////////////////////////////////////////////////////"<<endl;
// 	reset matrix
	init_matrix(pic);
	cout<<"After Resetting the image: "<<endl;
	out_matrix(pic);

// 	/////////////////////////////////////////////////////////////

//     Plugin *ptr;
//     ptr= &p;
//     ptr->apply_filter(pic);
//     cout<<"After apply_filter: "<<endl;
// 	out_matrix(pic);


//     Plugin *ptr;
//     ptr= &miw;
//     ptr->apply_filter(pic);
//     cout<<"After apply_filter: "<<endl;
// 	out_matrix(pic);


//     Plugin *ptr;
//     ptr= &mib;
//     ptr->apply_filter(pic);
//     cout<<"After apply_filter: "<<endl;
// 	out_matrix(pic);

    Plugin *ptr;
    ptr = select_plugin("mib");
    ptr->apply_filter(pic);
    cout<<"After apply_filter: "<<endl;
	out_matrix(pic);


    return 0;
}


//helper function
void init_matrix(int a[5][5]){
	int val=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			a[i][j] = val;
			val = val + 1;
		}
	}
}


void out_matrix(int a[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}


Plugin* select_plugin(string arg){
	string plugin_name = arg;

	Plugin *p;
	if(plugin_name == "mib"){
		p = new MakeItBlack;
	} else {
		p = new MakeItWhite;
	}

	return p;
}
