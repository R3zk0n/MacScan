// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBUFFEREDCHECKSUM_H
#define ORGAPACHELUCENESTOREBUFFEREDCHECKSUM_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "JavaUtilZipChecksum-Protocol.h"
#import "JavaUtilZipChecksum-Protocol.h"

@interface OrgApacheLuceneStoreBufferedChecksum : NSObject <JavaUtilZipChecksum>

 {
    id<JavaUtilZipChecksum> *in_;
    IOSByteArray *buffer_;
    int upto_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilZipChecksum:(id)arg0 ;
-(id)initWithJavaUtilZipChecksum:(id)arg0 withInt:(int)arg1 ;
-(void)updateWithInt:(int)arg0 ;
-(void)updateWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)getValue;
-(void)reset;
-(void)flush;
-(void)dealloc;


@end


#endif