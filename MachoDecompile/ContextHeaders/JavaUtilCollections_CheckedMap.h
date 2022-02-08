// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDMAP_H
#define JAVAUTILCOLLECTIONS_CHECKEDMAP_H


#import <Foundation/Foundation.h>

#import "IOSClass.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface JavaUtilCollections_CheckedMap : NSObject <JavaUtilMap, JavaIoSerializable>

 {
    id<JavaUtilMap> *m_;
    IOSClass *keyType_;
    IOSClass *valueType_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilMap:(id)arg0 withIOSClass:(id)arg1 withIOSClass:(id)arg2 ;
-(int)size;
-(BOOL)isEmpty;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)getWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(id)removeWithId:(id)arg0 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(void)clear;
-(id)keySet;
-(id)values;
-(id)entrySet;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif