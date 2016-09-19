#MarkDown 语法简述

Markdown 的宗旨是已于读写, 如果说HTML是发布格式, 那Markdown就是书写格式  
Markdown 有自己的标记语法,同时也支持HTML标记如  <i>斜体</i>  


##基础
####两种换行方式  
1. 加入`<br>`标签<br />
2. 两个空格加换行符

####分割线
	*** --- === 这三种方式都可表示分割线
***
---
===

关于转义 所有的符号都可以使用 反斜杠来转义

##标题
两种标题方式  
1. 下划线方式  

    This is H1
    ========== 
    This is H2
    ----------
2.标记方式  

    #h1
    ##h2
    ###h3
    ####h4
    或者
    #h1#
    ##h2##
    ....

#####引用
>引用  
>引用
引用  
>yinyong  

结束 记住结束引用需要多加一个空行

#####列表
* 无序列表
* 星号+空格
* 构成无序列表  
***

- 也可以是+ 或 -
- 无序
- 无序
***

1. 有序列表
2. 数字,句号+空格
3. 构成有序列表

***

#####代码区块
4个空格或者一个tab 表示代码区块  
    
    代码 <h1> 

`<br> 这是行内代码块`  
或者用 三个\`来表示代码块  

```
代码
代码块
```


#####链接
[**百度**](http://www.baidu.com "Baidu")  
[about](/etc/passwd) 这里链接的是本地资源  
参考链接[新浪][2]  


[1]:http://www.baidu.com "百度"
[2]:http://www.sina.com "新浪"


#####强调
    *强调* _强调_ **特别强调** __特别强调__
*强调* _强调_ **特别强调** __特别强调__






    
# 欢迎使用马克飞象

@(示例笔记本)[马克飞象|帮助|Markdown]

**马克飞象**是一款专为印象笔记（Evernote）打造的Markdown编辑器，通过精心的设计与技术实现，配合印象笔记强大的存储和同步功能，带来前所未有的书写体验。特点概述：
 
- **功能丰富** ：支持高亮代码块、*LaTeX* 公式、流程图，本地图片以及附件上传，甚至截图粘贴，工作学习好帮手；
- **得心应手** ：简洁高效的编辑器，提供[桌面客户端][1]以及[离线Chrome App][2]，支持移动端 Web；
- **深度整合** ：支持选择笔记本和添加标签，支持从印象笔记跳转编辑，轻松管理。

-------------------

[TOC]

## Markdown简介

> Markdown 是一种轻量级标记语言，它允许人们使用易读易写的纯文本格式编写文档，然后转换成格式丰富的HTML页面。    —— [维基百科](https://zh.wikipedia.org/wiki/Markdown)

正如您在阅读的这份文档，它使用简单的符号标识不同的标题，将某些文字标记为**粗体**或者*斜体*，创建一个[链接](http://www.example.com)或一个脚注[^demo]。下面列举了几个高级功能，更多语法请按`Cmd + /`查看帮助。 

### 代码块
``` python
@requires_authorization
def somefunc(param1='', param2=0):
    '''A docstring'''
    if param1 > param2: # interesting
        print 'Greater'
    return (param2 - param1 + 1) or None
class SomeClass:
    pass
>>> message = '''interpreter
... prompt'''
```
### LaTeX 公式

可以创建行内公式，例如 $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$。或者块级公式：

$$	x = \dfrac{-b \pm \sqrt{b^2 - 4ac}}{2a} $$

### 表格
| Item      |    Value | Qty  |
| :-------- | --------:| :--: |
| Computer  | 1600 USD |  5   |
| Phone     |   12 USD |  12  |
| Pipe      |    1 USD | 234  |




















