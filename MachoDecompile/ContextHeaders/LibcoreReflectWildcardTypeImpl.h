// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREREFLECTWILDCARDTYPEIMPL_H
#define LIBCOREREFLECTWILDCARDTYPEIMPL_H


#import <Foundation/Foundation.h>

#import "LibcoreReflectListOfTypes.h"
#import "JavaLangReflectWildcardType-Protocol.h"

@interface LibcoreReflectWildcardTypeImpl : NSObject <JavaLangReflectWildcardType>

 {
    LibcoreReflectListOfTypes *extendsBound_;
    LibcoreReflectListOfTypes *superBound_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLibcoreReflectListOfTypes:(id)arg0 withLibcoreReflectListOfTypes:(id)arg1 ;
-(id)getLowerBounds;
-(id)getUpperBounds;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif