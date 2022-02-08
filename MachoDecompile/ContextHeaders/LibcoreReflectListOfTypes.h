// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTLISTOFTYPES_H
#define LIBCOREREFLECTLISTOFTYPES_H


#import <Foundation/Foundation.h>

#import "JavaUtilArrayList.h"
#import "IOSObjectArray.h"

@interface LibcoreReflectListOfTypes : NSObject {
    JavaUtilArrayList *types_;
    IOSObjectArray *resolvedTypes_;
}




-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaLangReflectTypeArray:(id)arg0 ;
-(void)addWithJavaLangReflectType:(id)arg0 ;
-(int)length;
-(id)getResolvedTypes;
-(id)resolveTypesWithJavaUtilList:(id)arg0 ;
-(id)description;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif