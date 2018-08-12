/*************************************************************************
	> File Name: main.c
	> Author: linuxidc
	> Mail: linuxidc@linuxidc.com 
	> Created Time: 2017年11月24日 星期五 10时58分20秒
 ************************************************************************/

#include<stdio.h>
int create_js(void)
{
	cJSON *root;
	/* create json string root*/
	root = cJSON_CreateObject();
	if(!root){
		DEBUG("get root faild!\n");
	goto EXIT;
	}else DEBUG("get root success!\n");

	{
		cJSON *js_body;
		const char*const body = "body";
		cJSON_AddItemToObject(root,body,js_body=cJSON_CreateObjct());
		cJSON_AddStringToObject(ji_body,"name","xiaohui");
		cJSON_AddNumberToObject(js_body,"value",600);
		{
			char* s = cJSON_PrintUnformatted(root);
			if(s){
				DEBUG("create js string is %s",s);
				free(s);
				
			}
		}
		cJSON_Delete(root);
	}

	return 0;
EXIT:
	return -1;
}
int main(int argc,char** argv)
{
	create_js();
	return 0;
}

