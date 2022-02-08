// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREINPUTSTREAMDATAINPUT_H
#define ORGAPACHELUCENESTOREINPUTSTREAMDATAINPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataInput.h"
#import "JavaIoInputStream.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneStoreInputStreamDataInput : OrgApacheLuceneStoreDataInput <JavaIoCloseable>

 {
    JavaIoInputStream *is_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaIoInputStream:(id)arg0 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)close;
-(void)dealloc;


@end


#endif