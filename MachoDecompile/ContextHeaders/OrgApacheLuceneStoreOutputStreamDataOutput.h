// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREOUTPUTSTREAMDATAOUTPUT_H
#define ORGAPACHELUCENESTOREOUTPUTSTREAMDATAOUTPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataOutput.h"
#import "JavaIoOutputStream.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneStoreOutputStreamDataOutput : OrgApacheLuceneStoreDataOutput <JavaIoCloseable>

 {
    JavaIoOutputStream *os_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaIoOutputStream:(id)arg0 ;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)close;
-(void)dealloc;


@end


#endif