// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTMAP_SIMPLEIMMUTABLEENTRY_H
#define JAVAUTILABSTRACTMAP_SIMPLEIMMUTABLEENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap_Entry-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilAbstractMap_SimpleImmutableEntry : NSObject <JavaUtilMap_Entry, JavaIoSerializable>

 {
    id *key_;
    id *value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withId:(id)arg1 ;
-(id)initWithJavaUtilMap_Entry:(id)arg0 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif