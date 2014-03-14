IQmath_fake
===========

IQmath_fake是TI的IQmath数学函数库的测试替身，用于dsp以及其他使用IQmath数学库项目的单元测试。

IQmath_fake基于CppUTest-3.3单元测试框架开发，但并不限于此测试框架。关于CppUTest单元测试框架的使用可以参照[http://cpputest.github.io/](http://cpputest.github.io/ "CppUTest官网")。

IQmath_fake初期版本包含_IQNmpy，_IQNdiv，_IQNsin，_IQNcos，_IQNint，_IQNfrac等函数的测试替身，其他函数的测试替身将在后续版本中补充。

_IQNmpy的实现算法：A*B/(2^N)，运算中使用double数据类型。

_IQNdiv的实现算法：A*(2^N)/B，运算中使用double数据类型。

_IQNsin的实现算法：sin(A/(2^N))*(2^N)，运算中使用double型数据。

_IQNcos的实现算法：cos(A/(2^N))*(2^N)，运算中使用double型数据。

三角函数的运算，由于精度的问题，并不能确保与浮点型输入进行匹配，如果要完全匹配，需要按照IQ值进行每一步的精度换算。实际操作中，可以参照测试结果微调期望值输入，来使测试通过。

_IQNint的算法：A/(2^N)，使用long型数据进行运算。

_IQNfrac的算法：(A/(2^N))*(2^N)，使用long型数据运算，不可进行运算的化简，需要严格遵循运算步骤。
