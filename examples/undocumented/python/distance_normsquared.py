#!/usr/bin/env python
import shogun as sg
traindat = '../data/fm_train_real.dat'
testdat = '../data/fm_test_real.dat'

parameter_list = [[traindat,testdat],[traindat,testdat]]

def distance_normsquared (train_fname=traindat,test_fname=testdat):
	from shogun import CSVFile

	feats_train=sg.features(CSVFile(train_fname))
	feats_test=sg.features(CSVFile(test_fname))

	distance = sg.distance('EuclideanDistance', disable_sqrt=True)
	distance.init(feats_train, feats_train)

	dm_train=distance.get_distance_matrix()
	distance.init(feats_train, feats_test)
	dm_test=distance.get_distance_matrix()

	return distance,dm_train,dm_test

if __name__=='__main__':

	print('EuclideanDistance - NormSquared')
	distance_normsquared(*parameter_list[0])
