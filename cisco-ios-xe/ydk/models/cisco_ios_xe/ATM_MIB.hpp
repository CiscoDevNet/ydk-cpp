#ifndef _ATM_MIB_
#define _ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ATM_MIB {

class AtmMib : public ydk::Entity
{
    public:
        AtmMib();
        ~AtmMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Atmmibobjects; //type: AtmMib::Atmmibobjects
        class Atminterfaceconftable; //type: AtmMib::Atminterfaceconftable
        class Atminterfaceds3Plcptable; //type: AtmMib::Atminterfaceds3Plcptable
        class Atminterfacetctable; //type: AtmMib::Atminterfacetctable
        class Atmtrafficdescrparamtable; //type: AtmMib::Atmtrafficdescrparamtable
        class Atmvpltable; //type: AtmMib::Atmvpltable
        class Atmvcltable; //type: AtmMib::Atmvcltable
        class Atmvpcrossconnecttable; //type: AtmMib::Atmvpcrossconnecttable
        class Atmvccrossconnecttable; //type: AtmMib::Atmvccrossconnecttable
        class Aal5Vcctable; //type: AtmMib::Aal5Vcctable

        std::shared_ptr<ATM_MIB::AtmMib::Aal5Vcctable> aal5vcctable;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceconftable> atminterfaceconftable;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceds3Plcptable> atminterfaceds3plcptable;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfacetctable> atminterfacetctable;
        std::shared_ptr<ATM_MIB::AtmMib::Atmmibobjects> atmmibobjects;
        std::shared_ptr<ATM_MIB::AtmMib::Atmtrafficdescrparamtable> atmtrafficdescrparamtable;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvccrossconnecttable> atmvccrossconnecttable;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvcltable> atmvcltable;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvpcrossconnecttable> atmvpcrossconnecttable;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvpltable> atmvpltable;
        
}; // AtmMib


class AtmMib::Atmmibobjects : public ydk::Entity
{
    public:
        Atmmibobjects();
        ~Atmmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atmvpcrossconnectindexnext; //type: int32
        ydk::YLeaf atmvccrossconnectindexnext; //type: int32
        ydk::YLeaf atmtrafficdescrparamindexnext; //type: int32

}; // AtmMib::Atmmibobjects


class AtmMib::Atminterfaceconftable : public ydk::Entity
{
    public:
        Atminterfaceconftable();
        ~Atminterfaceconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atminterfaceconfentry; //type: AtmMib::Atminterfaceconftable::Atminterfaceconfentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceconftable::Atminterfaceconfentry> > atminterfaceconfentry;
        
}; // AtmMib::Atminterfaceconftable


class AtmMib::Atminterfaceconftable::Atminterfaceconfentry : public ydk::Entity
{
    public:
        Atminterfaceconfentry();
        ~Atminterfaceconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
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
        ydk::YLeaf catmintftypeofoamfailure; //type: Catmoamfailuretype
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
        ydk::YLeaf catmintftypeofoamrecover; //type: Catmoamrecoverytype
        ydk::YLeaf atmintfcurrentlydowntouppvcls; //type: uint32
        ydk::YLeaf atmintfoamfailedpvcls; //type: uint32
        ydk::YLeaf atmintfcurrentlyoamfailingpvcls; //type: uint32
        class Atminterfaceaddresstype;

}; // AtmMib::Atminterfaceconftable::Atminterfaceconfentry


class AtmMib::Atminterfaceds3Plcptable : public ydk::Entity
{
    public:
        Atminterfaceds3Plcptable();
        ~Atminterfaceds3Plcptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atminterfaceds3Plcpentry; //type: AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry> > atminterfaceds3plcpentry;
        
}; // AtmMib::Atminterfaceds3Plcptable


class AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry : public ydk::Entity
{
    public:
        Atminterfaceds3Plcpentry();
        ~Atminterfaceds3Plcpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceds3plcpsefss; //type: uint32
        ydk::YLeaf atminterfaceds3plcpalarmstate; //type: Atminterfaceds3Plcpalarmstate
        ydk::YLeaf atminterfaceds3plcpuass; //type: uint32
        class Atminterfaceds3Plcpalarmstate;

}; // AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry


class AtmMib::Atminterfacetctable : public ydk::Entity
{
    public:
        Atminterfacetctable();
        ~Atminterfacetctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atminterfacetcentry; //type: AtmMib::Atminterfacetctable::Atminterfacetcentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfacetctable::Atminterfacetcentry> > atminterfacetcentry;
        
}; // AtmMib::Atminterfacetctable


class AtmMib::Atminterfacetctable::Atminterfacetcentry : public ydk::Entity
{
    public:
        Atminterfacetcentry();
        ~Atminterfacetcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceocdevents; //type: uint32
        ydk::YLeaf atminterfacetcalarmstate; //type: Atminterfacetcalarmstate
        class Atminterfacetcalarmstate;

}; // AtmMib::Atminterfacetctable::Atminterfacetcentry


class AtmMib::Atmtrafficdescrparamtable : public ydk::Entity
{
    public:
        Atmtrafficdescrparamtable();
        ~Atmtrafficdescrparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmtrafficdescrparamentry; //type: AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry> > atmtrafficdescrparamentry;
        
}; // AtmMib::Atmtrafficdescrparamtable


class AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry : public ydk::Entity
{
    public:
        Atmtrafficdescrparamentry();
        ~Atmtrafficdescrparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atmtrafficdescrparamindex; //type: int32
        ydk::YLeaf atmtrafficdescrtype; //type: string
        ydk::YLeaf atmtrafficdescrparam1; //type: int32
        ydk::YLeaf atmtrafficdescrparam2; //type: int32
        ydk::YLeaf atmtrafficdescrparam3; //type: int32
        ydk::YLeaf atmtrafficdescrparam4; //type: int32
        ydk::YLeaf atmtrafficdescrparam5; //type: int32
        ydk::YLeaf atmtrafficqosclass; //type: int32
        ydk::YLeaf atmtrafficdescrrowstatus; //type: Rowstatus
        ydk::YLeaf atmservicecategory; //type: Atmservicecategory
        ydk::YLeaf atmtrafficframediscard; //type: boolean

}; // AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry


class AtmMib::Atmvpltable : public ydk::Entity
{
    public:
        Atmvpltable();
        ~Atmvpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmvplentry; //type: AtmMib::Atmvpltable::Atmvplentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvpltable::Atmvplentry> > atmvplentry;
        
}; // AtmMib::Atmvpltable


class AtmMib::Atmvpltable::Atmvplentry : public ydk::Entity
{
    public:
        Atmvplentry();
        ~Atmvplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvplvpi; //type: int32
        ydk::YLeaf atmvpladminstatus; //type: Atmvorxadminstatus
        ydk::YLeaf atmvploperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvpllastchange; //type: uint32
        ydk::YLeaf atmvplreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvpltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvplcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvplrowstatus; //type: Rowstatus
        ydk::YLeaf atmvplcasttype; //type: Atmconncasttype
        ydk::YLeaf atmvplconnkind; //type: Atmconnkind

}; // AtmMib::Atmvpltable::Atmvplentry


class AtmMib::Atmvcltable : public ydk::Entity
{
    public:
        Atmvcltable();
        ~Atmvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmvclentry; //type: AtmMib::Atmvcltable::Atmvclentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvcltable::Atmvclentry> > atmvclentry;
        
}; // AtmMib::Atmvcltable


class AtmMib::Atmvcltable::Atmvclentry : public ydk::Entity
{
    public:
        Atmvclentry();
        ~Atmvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvclvpi; //type: int32
        ydk::YLeaf atmvclvci; //type: int32
        ydk::YLeaf atmvcladminstatus; //type: Atmvorxadminstatus
        ydk::YLeaf atmvcloperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvcllastchange; //type: uint32
        ydk::YLeaf atmvclreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvcltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvccaaltype; //type: Atmvccaaltype
        ydk::YLeaf atmvccaal5cpcstransmitsdusize; //type: int32
        ydk::YLeaf atmvccaal5cpcsreceivesdusize; //type: int32
        ydk::YLeaf atmvccaal5encapstype; //type: Atmvccaal5Encapstype
        ydk::YLeaf atmvclcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvclrowstatus; //type: Rowstatus
        ydk::YLeaf atmvclcasttype; //type: Atmconncasttype
        ydk::YLeaf atmvclconnkind; //type: Atmconnkind
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
        ydk::YLeaf catmxvcloamendccstatus; //type: Oamccstatus
        ydk::YLeaf catmxvcloamsegccstatus; //type: Oamccstatus
        ydk::YLeaf catmxvcloamendccvcstate; //type: Oamccvcstate
        ydk::YLeaf catmxvcloamsegccvcstate; //type: Oamccvcstate
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

}; // AtmMib::Atmvcltable::Atmvclentry


class AtmMib::Atmvpcrossconnecttable : public ydk::Entity
{
    public:
        Atmvpcrossconnecttable();
        ~Atmvpcrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmvpcrossconnectentry; //type: AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry> > atmvpcrossconnectentry;
        
}; // AtmMib::Atmvpcrossconnecttable


class AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry : public ydk::Entity
{
    public:
        Atmvpcrossconnectentry();
        ~Atmvpcrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atmvpcrossconnectindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvpcrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvpcrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvpcrossconnectadminstatus; //type: Atmvorxadminstatus
        ydk::YLeaf atmvpcrossconnectl2hoperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvpcrossconnecth2loperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvpcrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnectrowstatus; //type: Rowstatus

}; // AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry


class AtmMib::Atmvccrossconnecttable : public ydk::Entity
{
    public:
        Atmvccrossconnecttable();
        ~Atmvccrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmvccrossconnectentry; //type: AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry> > atmvccrossconnectentry;
        
}; // AtmMib::Atmvccrossconnecttable


class AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry : public ydk::Entity
{
    public:
        Atmvccrossconnectentry();
        ~Atmvccrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atmvccrossconnectindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvccrossconnectlowvci; //type: int32
        ydk::YLeaf atmvccrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvccrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvccrossconnecthighvci; //type: int32
        ydk::YLeaf atmvccrossconnectadminstatus; //type: Atmvorxadminstatus
        ydk::YLeaf atmvccrossconnectl2hoperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvccrossconnecth2loperstatus; //type: Atmvorxoperstatus
        ydk::YLeaf atmvccrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvccrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvccrossconnectrowstatus; //type: Rowstatus

}; // AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry


class AtmMib::Aal5Vcctable : public ydk::Entity
{
    public:
        Aal5Vcctable();
        ~Aal5Vcctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Aal5Vccentry; //type: AtmMib::Aal5Vcctable::Aal5Vccentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Aal5Vcctable::Aal5Vccentry> > aal5vccentry;
        
}; // AtmMib::Aal5Vcctable


class AtmMib::Aal5Vcctable::Aal5Vccentry : public ydk::Entity
{
    public:
        Aal5Vccentry();
        ~Aal5Vccentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf aal5vccvpi; //type: int32
        ydk::YLeaf aal5vccvci; //type: int32
        ydk::YLeaf aal5vcccrcerrors; //type: uint32
        ydk::YLeaf aal5vccsartimeouts; //type: uint32
        ydk::YLeaf aal5vccoversizedsdus; //type: uint32
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
        ydk::YLeaf caal5vccextcompenabled; //type: boolean
        ydk::YLeaf caal5vccextvoice; //type: boolean
        ydk::YLeaf caal5vccextinf5oamcells; //type: uint32
        ydk::YLeaf caal5vccextoutf5oamcells; //type: uint32

}; // AtmMib::Aal5Vcctable::Aal5Vccentry

class AtmMib::Atminterfaceconftable::Atminterfaceconfentry::Atminterfaceaddresstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf private_;
        static const ydk::Enum::YLeaf nsapE164;
        static const ydk::Enum::YLeaf nativeE164;
        static const ydk::Enum::YLeaf other;

};

class AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3Plcpalarmstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf receivedFarEndAlarm;
        static const ydk::Enum::YLeaf incomingLOF;

};

class AtmMib::Atminterfacetctable::Atminterfacetcentry::Atminterfacetcalarmstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf lcdFailure;

};

class AtmMib::Atmvcltable::Atmvclentry::Atmvccaaltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aal1;
        static const ydk::Enum::YLeaf aal34;
        static const ydk::Enum::YLeaf aal5;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf aal2;

};

class AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5Encapstype : public ydk::Enum
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

class AtmMib::Atmvcltable::Atmvclentry::Catmxvcloamloopbkstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf sent;
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf failed;

};

class AtmMib::Atmvcltable::Atmvclentry::Catmxvcloamvcstate : public ydk::Enum
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

