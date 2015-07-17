/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDrawablesZOrder : TSPObject {
    NSMutableArray *_drawables;
}

@property (nonatomic, readonly) unsigned int drawableCount;

- (unsigned int)addDrawable:(id)arg1;
- (void)dealloc;
- (id)drawableAtZOrder:(unsigned int)arg1;
- (unsigned int)drawableCount;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (unsigned int)insertDrawable:(id)arg1 atZOrder:(unsigned int)arg2;
- (void)moveDrawable:(id)arg1 toZOrder:(unsigned int)arg2;
- (void)moveDrawableAtZOrder:(unsigned int)arg1 toZOrder:(unsigned int)arg2;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)moveDrawables:(id)arg1 toZOrder:(unsigned int)arg2;
- (id)orderedDrawables:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawableAtZOrder:(unsigned int)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)swapDrawableAtZOrder:(unsigned int)arg1 withDrawableAtZOrder:(unsigned int)arg2;
- (unsigned int)zOrderOfDrawable:(id)arg1;

@end