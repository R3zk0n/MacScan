// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVABEANSPROPERTYCHANGELISTENERPROXY_H
#define JAVABEANSPROPERTYCHANGELISTENERPROXY_H


#import <Foundation/Foundation.h>

#import "JavaUtilEventListenerProxy.h"
#import "JavaBeansPropertyChangeListener-Protocol.h"

@interface JavaBeansPropertyChangeListenerProxy : JavaUtilEventListenerProxy <JavaBeansPropertyChangeListener>

 {
    NSString *propertyName_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withJavaBeansPropertyChangeListener:(id)arg1 ;
-(id)getPropertyName;
-(void)propertyChangeWithJavaBeansPropertyChangeEvent:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif