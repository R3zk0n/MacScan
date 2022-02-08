// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILEVENTOBJECT_H
#define JAVAUTILEVENTOBJECT_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilEventObject : NSObject <JavaIoSerializable>

 {
    id *source_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 ;
-(id)getSource;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif