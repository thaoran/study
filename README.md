# ��ӭʹ�����˷���

@(ʾ���ʼǱ�)[���˷���|����|Markdown]

**���˷���**��һ��רΪӡ��ʼǣ�Evernote�������Markdown�༭����ͨ�����ĵ�����뼼��ʵ�֣����ӡ��ʼ�ǿ��Ĵ洢��ͬ�����ܣ�����ǰ��δ�е���д���顣�ص������
 
- **���ܷḻ** ��֧�ָ�������顢*LaTeX* ��ʽ������ͼ������ͼƬ�Լ������ϴ���������ͼճ��������ѧϰ�ð��֣�
- **����Ӧ��** ������Ч�ı༭�����ṩ[����ͻ���][1]�Լ�[����Chrome App][2]��֧���ƶ��� Web��
- **�������** ��֧��ѡ��ʼǱ������ӱ�ǩ��֧�ִ�ӡ��ʼ���ת�༭�����ɹ�����

-------------------

[TOC]

## Markdown���

> Markdown ��һ��������������ԣ�����������ʹ���׶���д�Ĵ��ı���ʽ��д�ĵ���Ȼ��ת���ɸ�ʽ�ḻ��HTMLҳ�档    ���� [ά���ٿ�](https://zh.wikipedia.org/wiki/Markdown)

���������Ķ�������ĵ�����ʹ�ü򵥵ķ��ű�ʶ��ͬ�ı��⣬��ĳЩ���ֱ��Ϊ**����**����*б��*������һ��[����](http://www.example.com)��һ����ע[^demo]�������о��˼����߼����ܣ������﷨�밴`Ctrl + /`�鿴������ 

### �����
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
### LaTeX ��ʽ

���Դ������ڹ�ʽ������ $\Gamma(n) = (n-1)!\quad\forall n\in\mathbb N$�����߿鼶��ʽ��

$$	x = \dfrac{-b \pm \sqrt{b^2 - 4ac}}{2a} $$

### ����
| Item      |    Value | Qty  |
| :-------- | --------:| :--: |
| Computer  | 1600 USD |  5   |
| Phone     |   12 USD |  12  |
| Pipe      |    1 USD | 234  |

### ����ͼ
```flow
st=>start: Start
e=>end
op=>operation: My Operation
cond=>condition: Yes or No?

st->op->cond
cond(yes)->e
cond(no)->op
```

�Լ�ʱ��ͼ:

```sequence
Alice->Bob: Hello Bob, how are you?
Note right of Bob: Bob thinks
Bob-->Alice: I am good thanks!
```

> **��ʾ��**���˽���࣬��鿴**����ͼ**[�﷨][3]�Լ�**ʱ��ͼ**[�﷨][4]��

### ��ѡ��

ʹ�� `- [ ]` �� `- [x]` �﷨���Դ�����ѡ��ʵ�� todo-list �ȹ��ܡ����磺

- [x] ���������
- [ ] ��������1
- [ ] ��������2

> **ע�⣺**Ŀǰ֧���в���ȫ����ӡ��ʼ��й�ѡ��ѡ������Ч������ͬ���ģ����Ա�����**���˷���**���޸� Markdown ԭ�Ĳſ���Ч���¸��汾����ȫ��֧�֡�


## ӡ��ʼ����

### �ʼǱ��ͱ�ǩ
**���˷���**������`@(�ʼǱ�)[��ǩA|��ǩB]`�﷨, ��ѡ��ʼǱ������ӱ�ǩ�� **���˺ź�**�� ����`(`�Զ�����ֱʼǱ��б��������ѡ��

### �ʼǱ���
**���˷���**���Զ�ʹ���ĵ��ڳ��ֵĵ�һ��������Ϊ�ʼǱ��⡣���籾�ģ����ǵ�һ�е� `��ӭʹ�����˷���`��

### ��ݱ༭
������ӡ��ʼ��еıʼǣ����Ͻǻ���һ����ɫ�ı༭��ť��������ص�**���˷���**�д򿪲��༭�ñʼǡ�
>**ע�⣺**Ŀǰ�û���ӡ��ʼ��е����������κ��޸ģ����˷������޷��Զ���֪�͸��µġ���������ػص����˷���༭��

### ����ͬ��
**���˷���**ͨ��**��Markdownԭ�����������ݱ����ڱʼ���**�ľ�����ƣ�ʵ���˶�Markdown�Ĵ洢���ٴα༭���Ƚ����������Ʒֻ�ǵ��򵼳�HTML�ĵ������ֹ���˷���˴洢Markdown��������˽��ȫ���⡣����������˽���Ϊ��ӡ��ʼ� API���ú�����ת��֮�á�

 >**��˽�������û����еıʼ����ݣ���������ӡ��ʼ��С����˷��󲻴洢�û����καʼ����ݡ�**

### ���ߴ洢
**���˷���**ʹ����������ߴ洢������ʵʱ�����ڱ��أ����ص�������ϵ��������������Ϊ�˽�ʡ�ռ�ͱ����ͻ����ͬ����ӡ��ʼǲ��Ҳ����޸ĵıʼǽ�ɾ�����ֱ��ػ��棬������Ȼ������ʱͨ��`�ĵ�����`�򿪡�

> **ע�⣺**��Ȼ������洢�󲿷�ʱ�򶼱ȽϿɿ�����ӡ��ʼ���Ϊרҵ�ƴ洢����ֵ���������Է���һ��**����ؾ�����ʱͬ����ӡ��ʼ�**��

## �༭�����
### ����
�Ҳ�ϵͳ�˵�����ݼ�`Ctrl + M`����`����`�У��ṩ�˽������塢�ֺš��Զ���CSS��vim/emacs ����ģʽ�ȸ߼�ѡ�

### ��ݼ�

����    `Ctrl + /`
ͬ���ĵ�    `Ctrl + S`
�����ĵ�    `Ctrl + Alt + N`
��󻯱༭��    `Ctrl + Enter`
Ԥ���ĵ� `Ctrl + Alt + Enter`
�ĵ�����    `Ctrl + O`
ϵͳ�˵�    `Ctrl + M` 

�Ӵ�    `Ctrl + B`
����ͼƬ    `Ctrl + G`
��������    `Ctrl + L`
��������    `Ctrl + H`

## �����շ�

**���˷���**Ϊ���û��ṩ 10 ��������ڣ������ڹ�����Ҫ[����](maxiang.info/vip.html)���ܼ���ʹ�á�δ�������δ��ʱ���ѣ�������ͬ���µıʼǡ�֮ǰ������ıʼ���Ȼ���Ա༭��


## �����뽨��
- ΢����[@���˷���](http://weibo.com/u/2788354117)��[@GGock](http://weibo.com/ggock "�����߸����˺�")
- ���䣺<hustgock@gmail.com>

---------
��л�Ķ���ݰ����ĵ����������Ͻǣ���ӡ��ʼ��˺ţ�����ȫ�µļ�¼���������ɡ�




[^demo]: ����һ��ʾ����ע������� [MultiMarkdown �ĵ�](https://github.com/fletcher/MultiMarkdown/wiki/MultiMarkdown-Syntax-Guide#footnotes) ���ڽ�ע��˵���� **���ƣ�** ӡ��ʼǵıʼ�����ʹ�� [ENML][5] ��ʽ������ HTML�����ǲ�֧��ĳЩ��ǩ�����ԣ�����id����͵���`��ע`��`TOC`�޷����������


  [1]: http://maxiang.info/client_zh
  [2]: https://chrome.google.com/webstore/detail/kidnkfckhbdkfgbicccmdggmpgogehop
  [3]: http://adrai.github.io/flowchart.js/
  [4]: http://bramp.github.io/js-sequence-diagrams/
  [5]: https://dev.yinxiang.com/doc/articles/enml.php