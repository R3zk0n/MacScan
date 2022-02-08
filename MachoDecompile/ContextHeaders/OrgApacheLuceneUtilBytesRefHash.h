// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILBYTESREFHASH_H
#define ORGAPACHELUCENEUTILBYTESREFHASH_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilByteBlockPool.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneUtilBytesRefHash_BytesStartArray.h"
#import "OrgApacheLuceneUtilCounter.h"

@interface OrgApacheLuceneUtilBytesRefHash : NSObject {
    OrgApacheLuceneUtilByteBlockPool *pool_;
    IOSIntArray *bytesStart_;
    OrgApacheLuceneUtilBytesRef *scratch1_;
    int hashSize_;
    int hashHalfSize_;
    int hashMask_;
    int count_;
    int lastCount_;
    IOSIntArray *ids_;
    OrgApacheLuceneUtilBytesRefHash_BytesStartArray *bytesStartArray_;
    OrgApacheLuceneUtilCounter *bytesUsed_;
}




-(id)init;
-(id)initWithOrgApacheLuceneUtilByteBlockPool:(id)arg0 ;
-(id)initWithOrgApacheLuceneUtilByteBlockPool:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilBytesRefHash_BytesStartArray:(id)arg2 ;
-(int)size;
-(id)getWithInt:(int)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)compact;
-(id)sortWithJavaUtilComparator:(id)arg0 ;
-(BOOL)equalsWithInt:(int)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(BOOL)shrinkWithInt:(int)arg0 ;
-(void)clearWithBoolean:(BOOL)arg0 ;
-(void)clear;
-(void)close;
-(int)addWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(int)findWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(int)findHashWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(int)addByPoolOffsetWithInt:(int)arg0 ;
-(void)rehashWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(int)doHashWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reinit;
-(int)byteStartWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif