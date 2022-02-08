// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILMERGEDITERATOR_SUBITERATOR_H
#define ORGAPACHELUCENEUTILMERGEDITERATOR_SUBITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilIterator-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneUtilMergedIterator_SubIterator : NSObject {
    id<JavaUtilIterator> *iterator_;
    id<JavaLangComparable> *current_;
    int index_;
}




-(id)init;
-(void)dealloc;


@end


#endif