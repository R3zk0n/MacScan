// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILSERVICELOADER_SERVICEITERATOR_H
#define JAVAUTILSERVICELOADER_SERVICEITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaLangClassLoader.h"
#import "IOSClass.h"
#import "JavaUtilLinkedList.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface JavaUtilServiceLoader_ServiceIterator : NSObject <JavaUtilIterator>

 {
    JavaLangClassLoader *classLoader_;
    IOSClass *service_;
    id<JavaUtilSet> *services_;
    BOOL isRead_;
    JavaUtilLinkedList *queue_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilServiceLoader:(id)arg0 withJavaUtilServiceLoader:(id)arg1 ;
-(BOOL)hasNext;
-(id)next;
-(void)readClass;
-(void)remove;
-(void)checkValidJavaClassNameWithNSString:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif