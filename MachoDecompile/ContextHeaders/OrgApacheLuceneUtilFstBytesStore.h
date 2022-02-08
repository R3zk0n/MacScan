// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBYTESSTORE_H
#define ORGAPACHELUCENEUTILFSTBYTESSTORE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataOutput.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneUtilFstBytesStore : OrgApacheLuceneStoreDataOutput <OrgApacheLuceneUtilAccountable>

 {
    id<JavaUtilList> *blocks_;
    int blockSize_;
    int blockBits_;
    int blockMask_;
    IOSByteArray *current_;
    int nextWrite_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)writeByteWithInt:(int)arg0 withByte:(char)arg1 ;
-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)getBlockBits;
-(void)writeBytesWithLong:(NSInteger)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)copyBytesWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)writeIntWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(void)reverseWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)skipBytesWithInt:(int)arg0 ;
-(NSInteger)getPosition;
-(void)truncateWithLong:(NSInteger)arg0 ;
-(void)finish;
-(void)writeToWithOrgApacheLuceneStoreDataOutput:(id)arg0 ;
-(id)getForwardReader;
-(id)getReverseReader;
-(id)getReverseReaderWithBoolean:(BOOL)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(void)initialize;


@end


#endif