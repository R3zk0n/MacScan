// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAENCLOSINGMETHODMETADATA_H
#define JAVAENCLOSINGMETHODMETADATA_H


#import <Foundation/Foundation.h>


@interface JavaEnclosingMethodMetadata : NSObject

@property (readonly, retain) NSString *typeName; // ivar: typeName
@property (readonly, retain) NSString *selector; // ivar: selector


-(id)initWithMetadata:(struct J2ObjCEnclosingMethodInfo *)arg0 ;
-(void)dealloc;


@end


#endif