#pragma once
#ifndef mySTACK_H
#define mySTACK_H

//Header of abstract class 
namespace mySTACKS {
	class STACK
	{
	public:
		virtual void push(int) = 0;
		virtual int pop() = 0;
		virtual bool empty() = 0;
		static STACK* getInstance(int);
		virtual ~STACK() { }
	};
}
#endif