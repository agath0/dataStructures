//THIS CODE WAS NOT COMPILED AND CHECKED
//TO BE WORKING  AND  WAS WRITTEN ONLY FOR
//UNDERSTANDIN PURPOSES





#define I 32767


int edges[3][9]={{1,1,2,2,3,4,4,5,5},
		 {2,6,3,7,4,5,7,6,7},
		 {25,5,12,10,18,16,14,20,18}}

int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};

int included[9]={0},t[2][6];

void union(int u,int v){
	if(set[u]<set[v]){
		set[u]=set[u]+set[v];
		set[v]=u;
	}
	else{
		set[v]+=set[u];
		set[u]=v;
	}
}

int find(int u)
{
	int x=u,v=0;
	while(set[x]>0){
		x=set[x];
	}
	while(u!=x){
		//this is the code for connecting directly to the
		//parents after finding them this process
		//is known as collapsing find
		v=set[u];
		set[u]=x;
		u=v;
	}
	return x;
}


void main(){
	int i=0,j,k,n=7,e=9,min,u,v;
	while(i<n-1){
		min=I;
		for(j=0;j<e;j++){
			if(included[j]==0 && edges[2][j]<min){
				min=edges[2][j];
				k=j;
				u=edges[0][j];
				v=edges[1][j];
			}
		}
		//if find(u)!=find(v) then they are not 
		//forming a cycle since there parents 
		//are not the same
		if(find(u)!=find(v)){
			t[0][i]=u;//include u and v in
			t[1][i]=v;// the solution
			union(find(u),find(v));//join ther parents
			i++;
		}
		included[k]=1;
	}
}


