/* Generated by RuntimeBrowser.
 */

@protocol PUMapAnnotationAnimatable <NSObject, MKAnnotation, NSCopying>

@required

- (long long)annotationSortingCompareWithAnnotation:(id <PUMapAnnotationAnimatable>)arg1;
- (NSString *)compactDescription;
- (long long)compare:(id)arg1;
- (bool)containsAnnotation:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (unsigned long long)count;
- (NSDate *)dateCreated;
- (NSObject *)itemId;
- (NSArray *)mapItems;
- (NSArray *)newestMaxMapItems:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })originalCoordinate;
- (unsigned long long)relativeOrder;
- (void)resetCoordinateToOriginal;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setRelativeOrder:(unsigned long long)arg1;
- (NSMutableSet *)subAnnotations;

@end
