// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVABEANSPROPERTYCHANGESUPPORT_H
#define JAVABEANSPROPERTYCHANGESUPPORT_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface JavaBeansPropertyChangeSupport : NSObject <JavaIoSerializable>

 {
    id *sourceBean_;
    id<JavaUtilList> *listeners_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 ;
-(void)firePropertyChangeWithNSString:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(void)fireIndexedPropertyChangeWithNSString:(id)arg0 withInt:(int)arg1 withId:(id)arg2 withId:(id)arg3 ;
-(void)removePropertyChangeListenerWithNSString:(id)arg0 withJavaBeansPropertyChangeListener:(id)arg1 ;
-(BOOL)equalsWithNSString:(id)arg0 withJavaUtilEventListener:(id)arg1 withJavaUtilEventListener:(id)arg2 ;
-(void)addPropertyChangeListenerWithNSString:(id)arg0 withJavaBeansPropertyChangeListener:(id)arg1 ;
-(id)getPropertyChangeListenersWithNSString:(id)arg0 ;
-(void)firePropertyChangeWithNSString:(id)arg0 withBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2 ;
-(void)fireIndexedPropertyChangeWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
-(void)firePropertyChangeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)fireIndexedPropertyChangeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(BOOL)hasListenersWithNSString:(id)arg0 ;
-(void)removePropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg0 ;
-(void)addPropertyChangeListenerWithJavaBeansPropertyChangeListener:(id)arg0 ;
-(id)getPropertyChangeListeners;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)firePropertyChangeWithJavaBeansPropertyChangeEvent:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif