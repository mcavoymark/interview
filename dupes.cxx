class Dupes {
public:
	//two pass
	void dupes(std::vector<int>& test) {
		for (auto i = test.begin()+1; i != test.end();) {
			if (*i != *(i - 1)) {
				test.erase(i - 1);
			} else {
				++i;
			}
		}
		if(*(test.end()-1)!=*(test.end()-2)) test.erase(test.end()-1);
		for (auto i = test.begin()+1; i != test.end();) {
			if (*i == *(i - 1)) {
				test.erase(i - 1);
			} else {
				++i;
			}
		}
	}

        //one pass
        void dupes2(std::vector<int>& test) {
	    int flag=0;
            for (auto i = test.begin()+1; i != test.end();) {
                if (*i == *(i - 1)) {
                    test.erase(i - 1);
		    flag=1;
		} else if (flag==1) { //if (*i !== *(i - 1))
		    ++i;	
		    flag=0;
	        } else { //if (*i !== *(i - 1))
                    test.erase(i - 1);
		    flag=0;
		}	
            } 
            if(!flag) test.erase(test.end()-1);
        }

        void dupes2a(std::vector<int>& test) {
            int flag=0;
            for (auto i = test.begin()+1; i != test.end();) {
                if (*i == *(i - 1)) {
                    test.erase(i - 1);
                    flag=1;
                } else { //if (*i !== *(i - 1)) {
                    flag==1 ? ++i : test.erase(i - 1); 
                    flag=0;
                }
            }
            if(!flag) test.erase(test.end()-1);
        }
};

int main()
{
	Dupes d;

	std::vector<int> test = { 1,1,1,2,3,4,5,5,6,7,7,7,7,8,8,9,10,11,11,12,13,14,15,16,16,17,18,19 };
        d.dupes(test);
        for (int i : test) std::cout << i << " "; std::cout << std::endl;

        test.assign({ 1,1,1,2,3,4,5,5,6,7,7,7,7,8,8,9,10,11,11,12,13,14,15,16,16,17,18,19 });
        d.dupes2(test);
        for (int i : test) std::cout << i << " "; std::cout << std::endl;

        test.assign({ 1,1,1,2,3,4,5,5,6,7,7,7,7,8,8,9,10,11,11,12,13,14,15,16,16,17,18,19 });
        d.dupes2a(test);
        for (int i : test) std::cout << i << " "; std::cout << std::endl;
}
