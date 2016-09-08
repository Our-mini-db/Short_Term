//-help

#include <stdio.h>
#include <string.h>
void Help()
{
    printf("------------------------------------------------\n");
    printf("1.create 创建表\n2.drop 删除表\n3.add 添加字段\n");
    printf("4.cancel 删除字段\n5.insert 插入记录\n6.update 更新记录\n");
    printf("7.delete 删除记录\n8.selcet 查询记录\n9.quit 退出帮助\n");
    int number;
    scanf("%d",&number);
    while(number!=9)
    {
        switch (number) {
            case 1:
                printf("CREATE table 字段1 数据类型 约束条件\n");
                printf("             字段2 数据类型 约束条件；\n");
                break;
            case 2:
                printf("DROP table\n");
                break;
            case 3:
                printf("ADD table 字段 数据类型 约束条件；\n");
                break;
            case 4:
                printf("CANCEL table 字段名称1 字段名称2;\n");
                break;
            case 5:
                printf("INSERT   table [字段1] [字段2]\n");
                printf("VALUES  “常量1” “常量2”；\n");
                break;
            case 6:
                printf("UPDATE	 table  字段1=“常量1”\n");
                printf("               字段2=“常量2”WHERE条件\n");
                break;
            case 7:
                printf("DELETE  table Where 条件\n");
                break;
            case 8:
                printf("SELECT 	table 字段1 字段2 字段3\n");
                 printf("top  where 条件  ORDER  by 字段 ASC(DESC)\n");
                break;
            case 9:
                return;
            default:
                printf("输入错误,tryagain!\n");
                break;
        }

        scanf("%d",&number);
    }
}
int main()
{
    Help();
    printf("------------------------------------------------\n");
}
