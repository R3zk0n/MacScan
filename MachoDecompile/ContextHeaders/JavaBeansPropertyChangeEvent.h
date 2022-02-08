// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVABEANSPROPERTYCHANGEEVENT_H
#define JAVABEANSPROPERTYCHANGEEVENT_H


#import <Foundation/Foundation.h>

#import "JavaUtilEventObject.h"

@interface JavaBeansPropertyChangeEvent : JavaUtilEventObject {
    NSString *propertyName_;
    id *oldValue_;
    id *newValue_;
    id *propagationId_;
}




-(id)initWithId:(id)arg0 withNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3 ;
-(id)getPropertyName;
-(void)setPropagationIdWithId:(id)arg0 ;
-(id)getPropagationId;
-(id)getOldValue;
-(id)getNewValue;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif