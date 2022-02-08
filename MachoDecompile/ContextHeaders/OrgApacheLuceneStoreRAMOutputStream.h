// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERAMOUTPUTSTREAM_H
#define ORGAPACHELUCENESTORERAMOUTPUTSTREAM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexOutput.h"
#import "OrgApacheLuceneStoreRAMFile.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"
#import "JavaUtilZipChecksum-Protocol.h"

@interface OrgApacheLuceneStoreRAMOutputStream : OrgApacheLuceneStoreIndexOutput <OrgApacheLuceneUtilAccountable>

 {
    OrgApacheLuceneStoreRAMFile *file_;
    IOSByteArray *currentBuffer_;
    int currentBufferIndex_;
    int bufferPosition_;
    NSInteger bufferStart_;
    int bufferLength_;
    id<JavaUtilZipChecksum> *crc_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgApacheLuceneStoreRAMFile:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreRAMFile:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)writeToWithOrgApacheLuceneStoreDataOutput:(id)arg0 ;
-(void)writeToWithByteArray:(id)arg0 withInt:(int)arg1 ;
-(void)reset;
-(void)close;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)switchCurrentBuffer;
-(void)setFileLength;
-(void)flush;
-(NSInteger)getFilePointer;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(NSInteger)getChecksum;
-(void)dealloc;


@end


#endif