#ifndef _ATM_MIB_
#define _ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ATM_MIB {

class ATMMIB : public ydk::Entity
{
    public:
        ATMMIB();
        ~ATMMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Atmmibobjects; //type: ATMMIB::Atmmibobjects
        class Atminterfaceconftable; //type: ATMMIB::Atminterfaceconftable
        class Atminterfaceds3Plcptable; //type: ATMMIB::Atminterfaceds3Plcptable
        class Atminterfacetctable; //type: ATMMIB::Atminterfacetctable
        class Atmtrafficdescrparamtable; //type: ATMMIB::Atmtrafficdescrparamtable
        class Atmvpltable; //type: ATMMIB::Atmvpltable
        class Atmvcltable; //type: ATMMIB::Atmvcltable
        class Atmvpcrossconnecttable; //type: ATMMIB::Atmvpcrossconnecttable
        class Atmvccrossconnecttable; //type: ATMMIB::Atmvccrossconnecttable
        class Aal5Vcctable; //type: ATMMIB::Aal5Vcctable

        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Aal5Vcctable> aal5vcctable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfaceconftable> atminterfaceconftable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfaceds3Plcptable> atminterfaceds3plcptable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfacetctable> atminterfacetctable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmmibobjects> atmmibobjects;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmtrafficdescrparamtable> atmtrafficdescrparamtable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvccrossconnecttable> atmvccrossconnecttable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable> atmvcltable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvpcrossconnecttable> atmvpcrossconnecttable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvpltable> atmvpltable;
        
}; // ATMMIB


class ATMMIB::Aal5Vcctable : public ydk::Entity
{
    public:
        Aal5Vcctable();
        ~Aal5Vcctable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Aal5Vccentry; //type: ATMMIB::Aal5Vcctable::Aal5Vccentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Aal5Vcctable::Aal5Vccentry> > aal5vccentry;
        
}; // ATMMIB::Aal5Vcctable


class ATMMIB::Aal5Vcctable::Aal5Vccentry : public ydk::Entity
{
    public:
        Aal5Vccentry();
        ~Aal5Vccentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf aal5vccvpi; //type: int32
        ydk::YLeaf aal5vccvci; //type: int32
        ydk::YLeaf aal5vcccrcerrors; //type: uint32
        ydk::YLeaf aal5vccsartimeouts; //type: uint32
        ydk::YLeaf aal5vccoversizedsdus; //type: uint32
        ydk::YLeaf caal5vccextcompenabled; //type: boolean
        ydk::YLeaf caal5vccextvoice; //type: boolean
        ydk::YLeaf caal5vccextinf5oamcells; //type: uint32
        ydk::YLeaf caal5vccextoutf5oamcells; //type: uint32
        ydk::YLeaf caal5vccinpkts; //type: uint32
        ydk::YLeaf caal5vccoutpkts; //type: uint32
        ydk::YLeaf caal5vccinoctets; //type: uint32
        ydk::YLeaf caal5vccoutoctets; //type: uint32
        ydk::YLeaf caal5vccindroppedpkts; //type: uint32
        ydk::YLeaf caal5vccoutdroppedpkts; //type: uint32
        ydk::YLeaf caal5vccindroppedoctets; //type: uint32
        ydk::YLeaf caal5vccoutdroppedoctets; //type: uint32
        ydk::YLeaf caal5vcchcinpkts; //type: uint64
        ydk::YLeaf caal5vcchcoutpkts; //type: uint64
        ydk::YLeaf caal5vcchcinoctets; //type: uint64
        ydk::YLeaf caal5vcchcoutoctets; //type: uint64

}; // ATMMIB::Aal5Vcctable::Aal5Vccentry


class ATMMIB::Atminterfaceconftable : public ydk::Entity
{
    public:
        Atminterfaceconftable();
        ~Atminterfaceconftable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atminterfaceconfentry; //type: ATMMIB::Atminterfaceconftable::Atminterfaceconfentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfaceconftable::Atminterfaceconfentry> > atminterfaceconfentry;
        
}; // ATMMIB::Atminterfaceconftable


class ATMMIB::Atminterfaceconftable::Atminterfaceconfentry : public ydk::Entity
{
    public:
        Atminterfaceconfentry();
        ~Atminterfaceconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfacemaxvpcs; //type: int32
        ydk::YLeaf atminterfacemaxvccs; //type: int32
        ydk::YLeaf atminterfaceconfvpcs; //type: int32
        ydk::YLeaf atminterfaceconfvccs; //type: int32
        ydk::YLeaf atminterfacemaxactivevpibits; //type: int32
        ydk::YLeaf atminterfacemaxactivevcibits; //type: int32
        ydk::YLeaf atminterfaceilmivpi; //type: int32
        ydk::YLeaf atminterfaceilmivci; //type: int32
        ydk::YLeaf atminterfaceaddresstype; //type: Atminterfaceaddresstype
        ydk::YLeaf atminterfaceadminaddress; //type: string
        ydk::YLeaf atminterfacemyneighboripaddress; //type: string
        ydk::YLeaf atminterfacemyneighborifname; //type: string
        ydk::YLeaf atminterfacecurrentmaxvpibits; //type: int32
        ydk::YLeaf atminterfacecurrentmaxvcibits; //type: int32
        ydk::YLeaf atminterfacesubscraddress; //type: string
        ydk::YLeaf atmintfpvcfailures; //type: uint32
        ydk::YLeaf atmintfcurrentlyfailingpvcls; //type: uint32
        ydk::YLeaf atmintfpvcfailurestrapenable; //type: boolean
        ydk::YLeaf atmintfpvcnotificationinterval; //type: int32
        ydk::YLeaf atmpreviouslyfailedpvclinterval; //type: int32
        ydk::YLeaf atmintfcurrentlydowntouppvcls; //type: uint32
        ydk::YLeaf atmintfoamfailedpvcls; //type: uint32
        ydk::YLeaf atmintfcurrentlyoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfcurrentlydowntouppvcls; //type: uint32
        ydk::YLeaf catmintfoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcurrentoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfsegccoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcursegccoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfendccoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcurendccoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfaisrdioamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcuraisrdioamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfanyoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcuranyoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintftypeofoamfailure; //type: CatmOAMFailureType
        ydk::YLeaf catmintfoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcurrentoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfsegccoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcursegccoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfendccoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcurendccoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfaisrdioamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcuraisrdioamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfanyoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcuranyoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintftypeofoamrecover; //type: CatmOAMRecoveryType
        class Atminterfaceaddresstype;

}; // ATMMIB::Atminterfaceconftable::Atminterfaceconfentry


class ATMMIB::Atminterfaceds3Plcptable : public ydk::Entity
{
    public:
        Atminterfaceds3Plcptable();
        ~Atminterfaceds3Plcptable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atminterfaceds3Plcpentry; //type: ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry> > atminterfaceds3plcpentry;
        
}; // ATMMIB::Atminterfaceds3Plcptable


class ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry : public ydk::Entity
{
    public:
        Atminterfaceds3Plcpentry();
        ~Atminterfaceds3Plcpentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceds3plcpsefss; //type: uint32
        ydk::YLeaf atminterfaceds3plcpalarmstate; //type: Atminterfaceds3Plcpalarmstate
        ydk::YLeaf atminterfaceds3plcpuass; //type: uint32
        class Atminterfaceds3Plcpalarmstate;

}; // ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry


class ATMMIB::Atminterfacetctable : public ydk::Entity
{
    public:
        Atminterfacetctable();
        ~Atminterfacetctable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atminterfacetcentry; //type: ATMMIB::Atminterfacetctable::Atminterfacetcentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atminterfacetctable::Atminterfacetcentry> > atminterfacetcentry;
        
}; // ATMMIB::Atminterfacetctable


class ATMMIB::Atminterfacetctable::Atminterfacetcentry : public ydk::Entity
{
    public:
        Atminterfacetcentry();
        ~Atminterfacetcentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceocdevents; //type: uint32
        ydk::YLeaf atminterfacetcalarmstate; //type: Atminterfacetcalarmstate
        class Atminterfacetcalarmstate;

}; // ATMMIB::Atminterfacetctable::Atminterfacetcentry


class ATMMIB::Atmmibobjects : public ydk::Entity
{
    public:
        Atmmibobjects();
        ~Atmmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atmvpcrossconnectindexnext; //type: int32
        ydk::YLeaf atmvccrossconnectindexnext; //type: int32
        ydk::YLeaf atmtrafficdescrparamindexnext; //type: int32

}; // ATMMIB::Atmmibobjects


class ATMMIB::Atmtrafficdescrparamtable : public ydk::Entity
{
    public:
        Atmtrafficdescrparamtable();
        ~Atmtrafficdescrparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atmtrafficdescrparamentry; //type: ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry> > atmtrafficdescrparamentry;
        
}; // ATMMIB::Atmtrafficdescrparamtable


class ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry : public ydk::Entity
{
    public:
        Atmtrafficdescrparamentry();
        ~Atmtrafficdescrparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atmtrafficdescrparamindex; //type: int32
        ydk::YLeaf atmtrafficdescrtype; //type: string
        ydk::YLeaf atmtrafficdescrparam1; //type: int32
        ydk::YLeaf atmtrafficdescrparam2; //type: int32
        ydk::YLeaf atmtrafficdescrparam3; //type: int32
        ydk::YLeaf atmtrafficdescrparam4; //type: int32
        ydk::YLeaf atmtrafficdescrparam5; //type: int32
        ydk::YLeaf atmtrafficqosclass; //type: int32
        ydk::YLeaf atmtrafficdescrrowstatus; //type: RowStatus
        ydk::YLeaf atmservicecategory; //type: AtmServiceCategory
        ydk::YLeaf atmtrafficframediscard; //type: boolean

}; // ATMMIB::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry


class ATMMIB::Atmvccrossconnecttable : public ydk::Entity
{
    public:
        Atmvccrossconnecttable();
        ~Atmvccrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atmvccrossconnectentry; //type: ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry> > atmvccrossconnectentry;
        
}; // ATMMIB::Atmvccrossconnecttable


class ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry : public ydk::Entity
{
    public:
        Atmvccrossconnectentry();
        ~Atmvccrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atmvccrossconnectindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvccrossconnectlowvci; //type: int32
        ydk::YLeaf atmvccrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvccrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvccrossconnecthighvci; //type: int32
        ydk::YLeaf atmvccrossconnectadminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvccrossconnectl2hoperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvccrossconnecth2loperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvccrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvccrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvccrossconnectrowstatus; //type: RowStatus

}; // ATMMIB::Atmvccrossconnecttable::Atmvccrossconnectentry


class ATMMIB::Atmvcltable : public ydk::Entity
{
    public:
        Atmvcltable();
        ~Atmvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atmvclentry; //type: ATMMIB::Atmvcltable::Atmvclentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvcltable::Atmvclentry> > atmvclentry;
        
}; // ATMMIB::Atmvcltable


class ATMMIB::Atmvcltable::Atmvclentry : public ydk::Entity
{
    public:
        Atmvclentry();
        ~Atmvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvclvpi; //type: int32
        ydk::YLeaf atmvclvci; //type: int32
        ydk::YLeaf atmvcladminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvcloperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvcllastchange; //type: uint32
        ydk::YLeaf atmvclreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvcltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvccaaltype; //type: Atmvccaaltype
        ydk::YLeaf atmvccaal5cpcstransmitsdusize; //type: int32
        ydk::YLeaf atmvccaal5cpcsreceivesdusize; //type: int32
        ydk::YLeaf atmvccaal5encapstype; //type: Atmvccaal5Encapstype
        ydk::YLeaf atmvclcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvclrowstatus; //type: RowStatus
        ydk::YLeaf atmvclcasttype; //type: AtmConnCastType
        ydk::YLeaf atmvclconnkind; //type: AtmConnKind
        ydk::YLeaf catmxvcloamloopbackfreq; //type: uint32
        ydk::YLeaf catmxvcloamretryfreq; //type: uint32
        ydk::YLeaf catmxvcloamupretrycount; //type: uint32
        ydk::YLeaf catmxvcloamdownretrycount; //type: uint32
        ydk::YLeaf catmxvcloamendccactcount; //type: uint32
        ydk::YLeaf catmxvcloamendccdeactcount; //type: uint32
        ydk::YLeaf catmxvcloamendccretryfreq; //type: uint32
        ydk::YLeaf catmxvcloamsegccactcount; //type: uint32
        ydk::YLeaf catmxvcloamsegccdeactcount; //type: uint32
        ydk::YLeaf catmxvcloamsegccretryfreq; //type: uint32
        ydk::YLeaf catmxvcloammanage; //type: boolean
        ydk::YLeaf catmxvcloamloopbkstatus; //type: Catmxvcloamloopbkstatus
        ydk::YLeaf catmxvcloamvcstate; //type: Catmxvcloamvcstate
        ydk::YLeaf catmxvcloamendccstatus; //type: OamCCStatus
        ydk::YLeaf catmxvcloamsegccstatus; //type: OamCCStatus
        ydk::YLeaf catmxvcloamendccvcstate; //type: OamCCVcState
        ydk::YLeaf catmxvcloamsegccvcstate; //type: OamCCVcState
        ydk::YLeaf catmxvcloamcellsreceived; //type: uint32
        ydk::YLeaf catmxvcloamcellssent; //type: uint32
        ydk::YLeaf catmxvcloamcellsdropped; //type: uint32
        ydk::YLeaf catmxvcloaminf5ais; //type: uint32
        ydk::YLeaf catmxvcloamoutf5ais; //type: uint32
        ydk::YLeaf catmxvcloaminf5rdi; //type: uint32
        ydk::YLeaf catmxvcloamoutf5rdi; //type: uint32
        class Atmvccaaltype;
        class Atmvccaal5Encapstype;
        class Catmxvcloamloopbkstatus;
        class Catmxvcloamvcstate;

}; // ATMMIB::Atmvcltable::Atmvclentry


class ATMMIB::Atmvpcrossconnecttable : public ydk::Entity
{
    public:
        Atmvpcrossconnecttable();
        ~Atmvpcrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atmvpcrossconnectentry; //type: ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry> > atmvpcrossconnectentry;
        
}; // ATMMIB::Atmvpcrossconnecttable


class ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry : public ydk::Entity
{
    public:
        Atmvpcrossconnectentry();
        ~Atmvpcrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf atmvpcrossconnectindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvpcrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvpcrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvpcrossconnectadminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvpcrossconnectl2hoperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpcrossconnecth2loperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpcrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnectrowstatus; //type: RowStatus

}; // ATMMIB::Atmvpcrossconnecttable::Atmvpcrossconnectentry


class ATMMIB::Atmvpltable : public ydk::Entity
{
    public:
        Atmvpltable();
        ~Atmvpltable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Atmvplentry; //type: ATMMIB::Atmvpltable::Atmvplentry

        std::vector<std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Atmvpltable::Atmvplentry> > atmvplentry;
        
}; // ATMMIB::Atmvpltable


class ATMMIB::Atmvpltable::Atmvplentry : public ydk::Entity
{
    public:
        Atmvplentry();
        ~Atmvplentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvplvpi; //type: int32
        ydk::YLeaf atmvpladminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvploperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpllastchange; //type: uint32
        ydk::YLeaf atmvplreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvpltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvplcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvplrowstatus; //type: RowStatus
        ydk::YLeaf atmvplcasttype; //type: AtmConnCastType
        ydk::YLeaf atmvplconnkind; //type: AtmConnKind

}; // ATMMIB::Atmvpltable::Atmvplentry

class ATMMIB::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf private_;
        static const ydk::Enum::YLeaf nsapE164;
        static const ydk::Enum::YLeaf nativeE164;
        static const ydk::Enum::YLeaf other;

};

class ATMMIB::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpalarmstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf receivedFarEndAlarm;
        static const ydk::Enum::YLeaf incomingLOF;

};

class ATMMIB::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcalarmstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf lcdFailure;

};

class ATMMIB::Atmvcltable::Atmvclentry::Atmvccaaltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aal1;
        static const ydk::Enum::YLeaf aal34;
        static const ydk::Enum::YLeaf aal5;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf aal2;

};

class ATMMIB::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vcMultiplexRoutedProtocol;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8023;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8025;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8026;
        static const ydk::Enum::YLeaf vcMultiplexLANemulation8023;
        static const ydk::Enum::YLeaf vcMultiplexLANemulation8025;
        static const ydk::Enum::YLeaf llcEncapsulation;
        static const ydk::Enum::YLeaf multiprotocolFrameRelaySscs;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;

};

class ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf sent;
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf failed;

};

class ATMMIB::Atmvcltable::Atmvclentry::Catmxvcloamvcstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downRetry;
        static const ydk::Enum::YLeaf verified;
        static const ydk::Enum::YLeaf notVerified;
        static const ydk::Enum::YLeaf upRetry;
        static const ydk::Enum::YLeaf aisRDI;
        static const ydk::Enum::YLeaf aisOut;
        static const ydk::Enum::YLeaf notManaged;

};


}
}

#endif /* _ATM_MIB_ */

