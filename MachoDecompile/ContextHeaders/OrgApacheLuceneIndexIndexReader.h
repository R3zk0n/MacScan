// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXREADER_H
#define ORGAPACHELUCENEINDEXINDEXREADER_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentAtomicAtomicInteger.h"
#import "JavaIoCloseable-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneIndexIndexReader : NSObject <JavaIoCloseable>

 {
    BOOL closed_;
    BOOL closedByChild_;
    JavaUtilConcurrentAtomicAtomicInteger *refCount_;
    id<JavaUtilSet> *readerClosedListeners_;
    id<JavaUtilSet> *parentReaders_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)addReaderClosedListenerWithOrgApacheLuceneIndexIndexReader_ReaderClosedListener:(id)arg0 ;
-(void)removeReaderClosedListenerWithOrgApacheLuceneIndexIndexReader_ReaderClosedListener:(id)arg0 ;
-(void)registerParentReaderWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(void)notifyReaderClosedListenersWithJavaLangThrowable:(id)arg0 ;
-(void)reportCloseToParentReaders;
-(int)getRefCount;
-(void)incRef;
-(BOOL)tryIncRef;
-(void)decRef;
-(void)ensureOpen;
-(BOOL)isEqual:(id)arg0 ;
-(id)getTermVectorWithInt:(int)arg0 withNSString:(id)arg1 ;
-(int)numDeletedDocs;
-(id)documentWithInt:(int)arg0 ;
-(id)documentWithInt:(int)arg0 withJavaUtilSet:(id)arg1 ;
-(BOOL)hasDeletions;
-(void)close;
-(id)leaves;
-(id)getCoreCacheKey;
-(id)getCombinedCoreAndDeletesKey;
-(void)dealloc;


@end


#endif