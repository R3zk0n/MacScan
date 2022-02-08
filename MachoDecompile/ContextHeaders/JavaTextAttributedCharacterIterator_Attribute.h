// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE_H
#define JAVATEXTATTRIBUTEDCHARACTERITERATOR_ATTRIBUTE_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaTextAttributedCharacterIterator_Attribute : NSObject <JavaIoSerializable>

 {
    NSString *name_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)getName;
-(id)readResolve;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif