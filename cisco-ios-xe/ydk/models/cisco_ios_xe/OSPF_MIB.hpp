#ifndef _OSPF_MIB_
#define _OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace OSPF_MIB {

class OSPFMIB : public ydk::Entity
{
    public:
        OSPFMIB();
        ~OSPFMIB();

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

        class Ospfgeneralgroup; //type: OSPFMIB::Ospfgeneralgroup
        class Ospfareatable; //type: OSPFMIB::Ospfareatable
        class Ospfstubareatable; //type: OSPFMIB::Ospfstubareatable
        class Ospflsdbtable; //type: OSPFMIB::Ospflsdbtable
        class Ospfarearangetable; //type: OSPFMIB::Ospfarearangetable
        class Ospfhosttable; //type: OSPFMIB::Ospfhosttable
        class Ospfiftable; //type: OSPFMIB::Ospfiftable
        class Ospfifmetrictable; //type: OSPFMIB::Ospfifmetrictable
        class Ospfvirtiftable; //type: OSPFMIB::Ospfvirtiftable
        class Ospfnbrtable; //type: OSPFMIB::Ospfnbrtable
        class Ospfvirtnbrtable; //type: OSPFMIB::Ospfvirtnbrtable
        class Ospfextlsdbtable; //type: OSPFMIB::Ospfextlsdbtable
        class Ospfareaaggregatetable; //type: OSPFMIB::Ospfareaaggregatetable
        class Ospflocallsdbtable; //type: OSPFMIB::Ospflocallsdbtable
        class Ospfvirtlocallsdbtable; //type: OSPFMIB::Ospfvirtlocallsdbtable
        class Ospfaslsdbtable; //type: OSPFMIB::Ospfaslsdbtable
        class Ospfarealsacounttable; //type: OSPFMIB::Ospfarealsacounttable

        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfareaaggregatetable> ospfareaaggregatetable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfarealsacounttable> ospfarealsacounttable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfarearangetable> ospfarearangetable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfareatable> ospfareatable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfaslsdbtable> ospfaslsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfextlsdbtable> ospfextlsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfgeneralgroup> ospfgeneralgroup;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfhosttable> ospfhosttable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfifmetrictable> ospfifmetrictable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfiftable> ospfiftable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflocallsdbtable> ospflocallsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflsdbtable> ospflsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfnbrtable> ospfnbrtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfstubareatable> ospfstubareatable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtiftable> ospfvirtiftable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtlocallsdbtable> ospfvirtlocallsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtnbrtable> ospfvirtnbrtable;
        
}; // OSPFMIB


class OSPFMIB::Ospfareaaggregatetable : public ydk::Entity
{
    public:
        Ospfareaaggregatetable();
        ~Ospfareaaggregatetable();

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

        class Ospfareaaggregateentry; //type: OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry> > ospfareaaggregateentry;
        
}; // OSPFMIB::Ospfareaaggregatetable


class OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry : public ydk::Entity
{
    public:
        Ospfareaaggregateentry();
        ~Ospfareaaggregateentry();

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

        ydk::YLeaf ospfareaaggregateareaid; //type: string
        ydk::YLeaf ospfareaaggregatelsdbtype; //type: Ospfareaaggregatelsdbtype
        ydk::YLeaf ospfareaaggregatenet; //type: string
        ydk::YLeaf ospfareaaggregatemask; //type: string
        ydk::YLeaf ospfareaaggregatestatus; //type: RowStatus
        ydk::YLeaf ospfareaaggregateeffect; //type: Ospfareaaggregateeffect
        ydk::YLeaf ospfareaaggregateextroutetag; //type: uint32
        class Ospfareaaggregatelsdbtype;
        class Ospfareaaggregateeffect;

}; // OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry


class OSPFMIB::Ospfarealsacounttable : public ydk::Entity
{
    public:
        Ospfarealsacounttable();
        ~Ospfarealsacounttable();

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

        class Ospfarealsacountentry; //type: OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry> > ospfarealsacountentry;
        
}; // OSPFMIB::Ospfarealsacounttable


class OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry : public ydk::Entity
{
    public:
        Ospfarealsacountentry();
        ~Ospfarealsacountentry();

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

        ydk::YLeaf ospfarealsacountareaid; //type: string
        ydk::YLeaf ospfarealsacountlsatype; //type: Ospfarealsacountlsatype
        ydk::YLeaf ospfarealsacountnumber; //type: uint32
        class Ospfarealsacountlsatype;

}; // OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry


class OSPFMIB::Ospfarearangetable : public ydk::Entity
{
    public:
        Ospfarearangetable();
        ~Ospfarearangetable();

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

        class Ospfarearangeentry; //type: OSPFMIB::Ospfarearangetable::Ospfarearangeentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfarearangetable::Ospfarearangeentry> > ospfarearangeentry;
        
}; // OSPFMIB::Ospfarearangetable


class OSPFMIB::Ospfarearangetable::Ospfarearangeentry : public ydk::Entity
{
    public:
        Ospfarearangeentry();
        ~Ospfarearangeentry();

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

        ydk::YLeaf ospfarearangeareaid; //type: string
        ydk::YLeaf ospfarearangenet; //type: string
        ydk::YLeaf ospfarearangemask; //type: string
        ydk::YLeaf ospfarearangestatus; //type: RowStatus
        ydk::YLeaf ospfarearangeeffect; //type: Ospfarearangeeffect
        class Ospfarearangeeffect;

}; // OSPFMIB::Ospfarearangetable::Ospfarearangeentry


class OSPFMIB::Ospfareatable : public ydk::Entity
{
    public:
        Ospfareatable();
        ~Ospfareatable();

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

        class Ospfareaentry; //type: OSPFMIB::Ospfareatable::Ospfareaentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfareatable::Ospfareaentry> > ospfareaentry;
        
}; // OSPFMIB::Ospfareatable


class OSPFMIB::Ospfareatable::Ospfareaentry : public ydk::Entity
{
    public:
        Ospfareaentry();
        ~Ospfareaentry();

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

        ydk::YLeaf ospfareaid; //type: string
        ydk::YLeaf ospfauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfimportasextern; //type: Ospfimportasextern
        ydk::YLeaf ospfspfruns; //type: uint32
        ydk::YLeaf ospfareabdrrtrcount; //type: uint32
        ydk::YLeaf ospfasbdrrtrcount; //type: uint32
        ydk::YLeaf ospfarealsacount; //type: uint32
        ydk::YLeaf ospfarealsacksumsum; //type: int32
        ydk::YLeaf ospfareasummary; //type: Ospfareasummary
        ydk::YLeaf ospfareastatus; //type: RowStatus
        ydk::YLeaf ospfareanssatranslatorrole; //type: Ospfareanssatranslatorrole
        ydk::YLeaf ospfareanssatranslatorstate; //type: Ospfareanssatranslatorstate
        ydk::YLeaf ospfareanssatranslatorstabilityinterval; //type: int32
        ydk::YLeaf ospfareanssatranslatorevents; //type: uint32
        ydk::YLeaf cospfopaquearealsacount; //type: uint32
        ydk::YLeaf cospfopaquearealsacksumsum; //type: uint32
        ydk::YLeaf cospfareanssatranslatorrole; //type: Cospfareanssatranslatorrole
        ydk::YLeaf cospfareanssatranslatorstate; //type: Cospfareanssatranslatorstate
        ydk::YLeaf cospfareanssatranslatorevents; //type: uint32
        class Ospfimportasextern;
        class Ospfareasummary;
        class Ospfareanssatranslatorrole;
        class Ospfareanssatranslatorstate;
        class Cospfareanssatranslatorrole;
        class Cospfareanssatranslatorstate;

}; // OSPFMIB::Ospfareatable::Ospfareaentry


class OSPFMIB::Ospfaslsdbtable : public ydk::Entity
{
    public:
        Ospfaslsdbtable();
        ~Ospfaslsdbtable();

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

        class Ospfaslsdbentry; //type: OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry> > ospfaslsdbentry;
        
}; // OSPFMIB::Ospfaslsdbtable


class OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry : public ydk::Entity
{
    public:
        Ospfaslsdbentry();
        ~Ospfaslsdbentry();

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

        ydk::YLeaf ospfaslsdbtype; //type: Ospfaslsdbtype
        ydk::YLeaf ospfaslsdblsid; //type: string
        ydk::YLeaf ospfaslsdbrouterid; //type: string
        ydk::YLeaf ospfaslsdbsequence; //type: int32
        ydk::YLeaf ospfaslsdbage; //type: int32
        ydk::YLeaf ospfaslsdbchecksum; //type: int32
        ydk::YLeaf ospfaslsdbadvertisement; //type: binary
        class Ospfaslsdbtype;

}; // OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry


class OSPFMIB::Ospfextlsdbtable : public ydk::Entity
{
    public:
        Ospfextlsdbtable();
        ~Ospfextlsdbtable();

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

        class Ospfextlsdbentry; //type: OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry> > ospfextlsdbentry;
        
}; // OSPFMIB::Ospfextlsdbtable


class OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry : public ydk::Entity
{
    public:
        Ospfextlsdbentry();
        ~Ospfextlsdbentry();

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

        ydk::YLeaf ospfextlsdbtype; //type: Ospfextlsdbtype
        ydk::YLeaf ospfextlsdblsid; //type: string
        ydk::YLeaf ospfextlsdbrouterid; //type: string
        ydk::YLeaf ospfextlsdbsequence; //type: int32
        ydk::YLeaf ospfextlsdbage; //type: int32
        ydk::YLeaf ospfextlsdbchecksum; //type: int32
        ydk::YLeaf ospfextlsdbadvertisement; //type: binary
        class Ospfextlsdbtype;

}; // OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry


class OSPFMIB::Ospfgeneralgroup : public ydk::Entity
{
    public:
        Ospfgeneralgroup();
        ~Ospfgeneralgroup();

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

        ydk::YLeaf ospfrouterid; //type: string
        ydk::YLeaf ospfadminstat; //type: Status
        ydk::YLeaf ospfversionnumber; //type: Ospfversionnumber
        ydk::YLeaf ospfareabdrrtrstatus; //type: boolean
        ydk::YLeaf ospfasbdrrtrstatus; //type: boolean
        ydk::YLeaf ospfexternlsacount; //type: uint32
        ydk::YLeaf ospfexternlsacksumsum; //type: int32
        ydk::YLeaf ospftossupport; //type: boolean
        ydk::YLeaf ospforiginatenewlsas; //type: uint32
        ydk::YLeaf ospfrxnewlsas; //type: uint32
        ydk::YLeaf ospfextlsdblimit; //type: int32
        ydk::YLeaf ospfmulticastextensions; //type: int32
        ydk::YLeaf ospfexitoverflowinterval; //type: int32
        ydk::YLeaf ospfdemandextensions; //type: boolean
        ydk::YLeaf ospfrfc1583compatibility; //type: boolean
        ydk::YLeaf ospfopaquelsasupport; //type: boolean
        ydk::YLeaf ospfreferencebandwidth; //type: uint32
        ydk::YLeaf ospfrestartsupport; //type: Ospfrestartsupport
        ydk::YLeaf ospfrestartinterval; //type: int32
        ydk::YLeaf ospfrestartstrictlsachecking; //type: boolean
        ydk::YLeaf ospfrestartstatus; //type: Ospfrestartstatus
        ydk::YLeaf ospfrestartage; //type: uint32
        ydk::YLeaf ospfrestartexitreason; //type: Ospfrestartexitreason
        ydk::YLeaf ospfaslsacount; //type: uint32
        ydk::YLeaf ospfaslsacksumsum; //type: uint32
        ydk::YLeaf ospfstubroutersupport; //type: boolean
        ydk::YLeaf ospfstubrouteradvertisement; //type: Ospfstubrouteradvertisement
        ydk::YLeaf ospfdiscontinuitytime; //type: uint32
        class Ospfversionnumber;
        class Ospfrestartsupport;
        class Ospfrestartstatus;
        class Ospfrestartexitreason;
        class Ospfstubrouteradvertisement;

}; // OSPFMIB::Ospfgeneralgroup


class OSPFMIB::Ospfhosttable : public ydk::Entity
{
    public:
        Ospfhosttable();
        ~Ospfhosttable();

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

        class Ospfhostentry; //type: OSPFMIB::Ospfhosttable::Ospfhostentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfhosttable::Ospfhostentry> > ospfhostentry;
        
}; // OSPFMIB::Ospfhosttable


class OSPFMIB::Ospfhosttable::Ospfhostentry : public ydk::Entity
{
    public:
        Ospfhostentry();
        ~Ospfhostentry();

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

        ydk::YLeaf ospfhostipaddress; //type: string
        ydk::YLeaf ospfhosttos; //type: int32
        ydk::YLeaf ospfhostmetric; //type: int32
        ydk::YLeaf ospfhoststatus; //type: RowStatus
        ydk::YLeaf ospfhostareaid; //type: string
        ydk::YLeaf ospfhostcfgareaid; //type: string

}; // OSPFMIB::Ospfhosttable::Ospfhostentry


class OSPFMIB::Ospfifmetrictable : public ydk::Entity
{
    public:
        Ospfifmetrictable();
        ~Ospfifmetrictable();

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

        class Ospfifmetricentry; //type: OSPFMIB::Ospfifmetrictable::Ospfifmetricentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfifmetrictable::Ospfifmetricentry> > ospfifmetricentry;
        
}; // OSPFMIB::Ospfifmetrictable


class OSPFMIB::Ospfifmetrictable::Ospfifmetricentry : public ydk::Entity
{
    public:
        Ospfifmetricentry();
        ~Ospfifmetricentry();

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

        ydk::YLeaf ospfifmetricipaddress; //type: string
        ydk::YLeaf ospfifmetricaddresslessif; //type: int32
        ydk::YLeaf ospfifmetrictos; //type: int32
        ydk::YLeaf ospfifmetricvalue; //type: int32
        ydk::YLeaf ospfifmetricstatus; //type: RowStatus

}; // OSPFMIB::Ospfifmetrictable::Ospfifmetricentry


class OSPFMIB::Ospfiftable : public ydk::Entity
{
    public:
        Ospfiftable();
        ~Ospfiftable();

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

        class Ospfifentry; //type: OSPFMIB::Ospfiftable::Ospfifentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfiftable::Ospfifentry> > ospfifentry;
        
}; // OSPFMIB::Ospfiftable


class OSPFMIB::Ospfiftable::Ospfifentry : public ydk::Entity
{
    public:
        Ospfifentry();
        ~Ospfifentry();

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

        ydk::YLeaf ospfifipaddress; //type: string
        ydk::YLeaf ospfaddresslessif; //type: int32
        ydk::YLeaf ospfifareaid; //type: string
        ydk::YLeaf ospfiftype; //type: Ospfiftype
        ydk::YLeaf ospfifadminstat; //type: Status
        ydk::YLeaf ospfifrtrpriority; //type: int32
        ydk::YLeaf ospfiftransitdelay; //type: int32
        ydk::YLeaf ospfifretransinterval; //type: int32
        ydk::YLeaf ospfifhellointerval; //type: int32
        ydk::YLeaf ospfifrtrdeadinterval; //type: int32
        ydk::YLeaf ospfifpollinterval; //type: int32
        ydk::YLeaf ospfifstate; //type: Ospfifstate
        ydk::YLeaf ospfifdesignatedrouter; //type: string
        ydk::YLeaf ospfifbackupdesignatedrouter; //type: string
        ydk::YLeaf ospfifevents; //type: uint32
        ydk::YLeaf ospfifauthkey; //type: binary
        ydk::YLeaf ospfifstatus; //type: RowStatus
        ydk::YLeaf ospfifmulticastforwarding; //type: Ospfifmulticastforwarding
        ydk::YLeaf ospfifdemand; //type: boolean
        ydk::YLeaf ospfifauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfiflsacount; //type: uint32
        ydk::YLeaf ospfiflsacksumsum; //type: uint32
        ydk::YLeaf ospfifdesignatedrouterid; //type: string
        ydk::YLeaf ospfifbackupdesignatedrouterid; //type: string
        ydk::YLeaf cospfiflsacount; //type: uint32
        ydk::YLeaf cospfiflsacksumsum; //type: uint32
        class Ospfiftype;
        class Ospfifstate;
        class Ospfifmulticastforwarding;

}; // OSPFMIB::Ospfiftable::Ospfifentry


class OSPFMIB::Ospflocallsdbtable : public ydk::Entity
{
    public:
        Ospflocallsdbtable();
        ~Ospflocallsdbtable();

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

        class Ospflocallsdbentry; //type: OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry> > ospflocallsdbentry;
        
}; // OSPFMIB::Ospflocallsdbtable


class OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry : public ydk::Entity
{
    public:
        Ospflocallsdbentry();
        ~Ospflocallsdbentry();

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

        ydk::YLeaf ospflocallsdbipaddress; //type: string
        ydk::YLeaf ospflocallsdbaddresslessif; //type: int32
        ydk::YLeaf ospflocallsdbtype; //type: Ospflocallsdbtype
        ydk::YLeaf ospflocallsdblsid; //type: string
        ydk::YLeaf ospflocallsdbrouterid; //type: string
        ydk::YLeaf ospflocallsdbsequence; //type: int32
        ydk::YLeaf ospflocallsdbage; //type: int32
        ydk::YLeaf ospflocallsdbchecksum; //type: int32
        ydk::YLeaf ospflocallsdbadvertisement; //type: binary
        class Ospflocallsdbtype;

}; // OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry


class OSPFMIB::Ospflsdbtable : public ydk::Entity
{
    public:
        Ospflsdbtable();
        ~Ospflsdbtable();

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

        class Ospflsdbentry; //type: OSPFMIB::Ospflsdbtable::Ospflsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflsdbtable::Ospflsdbentry> > ospflsdbentry;
        
}; // OSPFMIB::Ospflsdbtable


class OSPFMIB::Ospflsdbtable::Ospflsdbentry : public ydk::Entity
{
    public:
        Ospflsdbentry();
        ~Ospflsdbentry();

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

        ydk::YLeaf ospflsdbareaid; //type: string
        ydk::YLeaf ospflsdbtype; //type: Ospflsdbtype
        ydk::YLeaf ospflsdblsid; //type: string
        ydk::YLeaf ospflsdbrouterid; //type: string
        ydk::YLeaf ospflsdbsequence; //type: int32
        ydk::YLeaf ospflsdbage; //type: int32
        ydk::YLeaf ospflsdbchecksum; //type: int32
        ydk::YLeaf ospflsdbadvertisement; //type: binary
        class Ospflsdbtype;

}; // OSPFMIB::Ospflsdbtable::Ospflsdbentry


class OSPFMIB::Ospfnbrtable : public ydk::Entity
{
    public:
        Ospfnbrtable();
        ~Ospfnbrtable();

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

        class Ospfnbrentry; //type: OSPFMIB::Ospfnbrtable::Ospfnbrentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfnbrtable::Ospfnbrentry> > ospfnbrentry;
        
}; // OSPFMIB::Ospfnbrtable


class OSPFMIB::Ospfnbrtable::Ospfnbrentry : public ydk::Entity
{
    public:
        Ospfnbrentry();
        ~Ospfnbrentry();

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

        ydk::YLeaf ospfnbripaddr; //type: string
        ydk::YLeaf ospfnbraddresslessindex; //type: int32
        ydk::YLeaf ospfnbrrtrid; //type: string
        ydk::YLeaf ospfnbroptions; //type: int32
        ydk::YLeaf ospfnbrpriority; //type: int32
        ydk::YLeaf ospfnbrstate; //type: Ospfnbrstate
        ydk::YLeaf ospfnbrevents; //type: uint32
        ydk::YLeaf ospfnbrlsretransqlen; //type: uint32
        ydk::YLeaf ospfnbmanbrstatus; //type: RowStatus
        ydk::YLeaf ospfnbmanbrpermanence; //type: Ospfnbmanbrpermanence
        ydk::YLeaf ospfnbrhellosuppressed; //type: boolean
        ydk::YLeaf ospfnbrrestarthelperstatus; //type: Ospfnbrrestarthelperstatus
        ydk::YLeaf ospfnbrrestarthelperage; //type: uint32
        ydk::YLeaf ospfnbrrestarthelperexitreason; //type: Ospfnbrrestarthelperexitreason
        class Ospfnbrstate;
        class Ospfnbmanbrpermanence;
        class Ospfnbrrestarthelperstatus;
        class Ospfnbrrestarthelperexitreason;

}; // OSPFMIB::Ospfnbrtable::Ospfnbrentry


class OSPFMIB::Ospfstubareatable : public ydk::Entity
{
    public:
        Ospfstubareatable();
        ~Ospfstubareatable();

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

        class Ospfstubareaentry; //type: OSPFMIB::Ospfstubareatable::Ospfstubareaentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfstubareatable::Ospfstubareaentry> > ospfstubareaentry;
        
}; // OSPFMIB::Ospfstubareatable


class OSPFMIB::Ospfstubareatable::Ospfstubareaentry : public ydk::Entity
{
    public:
        Ospfstubareaentry();
        ~Ospfstubareaentry();

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

        ydk::YLeaf ospfstubareaid; //type: string
        ydk::YLeaf ospfstubtos; //type: int32
        ydk::YLeaf ospfstubmetric; //type: int32
        ydk::YLeaf ospfstubstatus; //type: RowStatus
        ydk::YLeaf ospfstubmetrictype; //type: Ospfstubmetrictype
        class Ospfstubmetrictype;

}; // OSPFMIB::Ospfstubareatable::Ospfstubareaentry


class OSPFMIB::Ospfvirtiftable : public ydk::Entity
{
    public:
        Ospfvirtiftable();
        ~Ospfvirtiftable();

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

        class Ospfvirtifentry; //type: OSPFMIB::Ospfvirtiftable::Ospfvirtifentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtiftable::Ospfvirtifentry> > ospfvirtifentry;
        
}; // OSPFMIB::Ospfvirtiftable


class OSPFMIB::Ospfvirtiftable::Ospfvirtifentry : public ydk::Entity
{
    public:
        Ospfvirtifentry();
        ~Ospfvirtifentry();

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

        ydk::YLeaf ospfvirtifareaid; //type: string
        ydk::YLeaf ospfvirtifneighbor; //type: string
        ydk::YLeaf ospfvirtiftransitdelay; //type: int32
        ydk::YLeaf ospfvirtifretransinterval; //type: int32
        ydk::YLeaf ospfvirtifhellointerval; //type: int32
        ydk::YLeaf ospfvirtifrtrdeadinterval; //type: int32
        ydk::YLeaf ospfvirtifstate; //type: Ospfvirtifstate
        ydk::YLeaf ospfvirtifevents; //type: uint32
        ydk::YLeaf ospfvirtifauthkey; //type: binary
        ydk::YLeaf ospfvirtifstatus; //type: RowStatus
        ydk::YLeaf ospfvirtifauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfvirtiflsacount; //type: uint32
        ydk::YLeaf ospfvirtiflsacksumsum; //type: uint32
        ydk::YLeaf cospfvirtiflsacount; //type: uint32
        ydk::YLeaf cospfvirtiflsacksumsum; //type: uint32
        class Ospfvirtifstate;

}; // OSPFMIB::Ospfvirtiftable::Ospfvirtifentry


class OSPFMIB::Ospfvirtlocallsdbtable : public ydk::Entity
{
    public:
        Ospfvirtlocallsdbtable();
        ~Ospfvirtlocallsdbtable();

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

        class Ospfvirtlocallsdbentry; //type: OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry> > ospfvirtlocallsdbentry;
        
}; // OSPFMIB::Ospfvirtlocallsdbtable


class OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry : public ydk::Entity
{
    public:
        Ospfvirtlocallsdbentry();
        ~Ospfvirtlocallsdbentry();

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

        ydk::YLeaf ospfvirtlocallsdbtransitarea; //type: string
        ydk::YLeaf ospfvirtlocallsdbneighbor; //type: string
        ydk::YLeaf ospfvirtlocallsdbtype; //type: Ospfvirtlocallsdbtype
        ydk::YLeaf ospfvirtlocallsdblsid; //type: string
        ydk::YLeaf ospfvirtlocallsdbrouterid; //type: string
        ydk::YLeaf ospfvirtlocallsdbsequence; //type: int32
        ydk::YLeaf ospfvirtlocallsdbage; //type: int32
        ydk::YLeaf ospfvirtlocallsdbchecksum; //type: int32
        ydk::YLeaf ospfvirtlocallsdbadvertisement; //type: binary
        class Ospfvirtlocallsdbtype;

}; // OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry


class OSPFMIB::Ospfvirtnbrtable : public ydk::Entity
{
    public:
        Ospfvirtnbrtable();
        ~Ospfvirtnbrtable();

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

        class Ospfvirtnbrentry; //type: OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry

        std::vector<std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry> > ospfvirtnbrentry;
        
}; // OSPFMIB::Ospfvirtnbrtable


class OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry : public ydk::Entity
{
    public:
        Ospfvirtnbrentry();
        ~Ospfvirtnbrentry();

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

        ydk::YLeaf ospfvirtnbrarea; //type: string
        ydk::YLeaf ospfvirtnbrrtrid; //type: string
        ydk::YLeaf ospfvirtnbripaddr; //type: string
        ydk::YLeaf ospfvirtnbroptions; //type: int32
        ydk::YLeaf ospfvirtnbrstate; //type: Ospfvirtnbrstate
        ydk::YLeaf ospfvirtnbrevents; //type: uint32
        ydk::YLeaf ospfvirtnbrlsretransqlen; //type: uint32
        ydk::YLeaf ospfvirtnbrhellosuppressed; //type: boolean
        ydk::YLeaf ospfvirtnbrrestarthelperstatus; //type: Ospfvirtnbrrestarthelperstatus
        ydk::YLeaf ospfvirtnbrrestarthelperage; //type: uint32
        ydk::YLeaf ospfvirtnbrrestarthelperexitreason; //type: Ospfvirtnbrrestarthelperexitreason
        class Ospfvirtnbrstate;
        class Ospfvirtnbrrestarthelperstatus;
        class Ospfvirtnbrrestarthelperexitreason;

}; // OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry

class Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class OspfAuthenticationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simplePassword;
        static const ydk::Enum::YLeaf md5;

};

class OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregatelsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf nssaExternalLink;

};

class OSPFMIB::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateeffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OSPFMIB::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routerLink;
        static const ydk::Enum::YLeaf networkLink;
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf asSummaryLink;
        static const ydk::Enum::YLeaf multicastLink;
        static const ydk::Enum::YLeaf nssaExternalLink;
        static const ydk::Enum::YLeaf areaOpaqueLink;

};

class OSPFMIB::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeeffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Ospfimportasextern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf importExternal;
        static const ydk::Enum::YLeaf importNoExternal;
        static const ydk::Enum::YLeaf importNssa;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareasummary : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAreaSummary;
        static const ydk::Enum::YLeaf sendAreaSummary;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OSPFMIB::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OSPFMIB::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class OSPFMIB::Ospfextlsdbtable::Ospfextlsdbentry::Ospfextlsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;

};

class OSPFMIB::Ospfgeneralgroup::Ospfversionnumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version2;

};

class OSPFMIB::Ospfgeneralgroup::Ospfrestartsupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf plannedOnly;
        static const ydk::Enum::YLeaf plannedAndUnplanned;

};

class OSPFMIB::Ospfgeneralgroup::Ospfrestartstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notRestarting;
        static const ydk::Enum::YLeaf plannedRestart;
        static const ydk::Enum::YLeaf unplannedRestart;

};

class OSPFMIB::Ospfgeneralgroup::Ospfrestartexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OSPFMIB::Ospfgeneralgroup::Ospfstubrouteradvertisement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf doNotAdvertise;
        static const ydk::Enum::YLeaf advertise;

};

class OSPFMIB::Ospfiftable::Ospfifentry::Ospfiftype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf nbma;
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf pointToMultipoint;

};

class OSPFMIB::Ospfiftable::Ospfifentry::Ospfifstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf designatedRouter;
        static const ydk::Enum::YLeaf backupDesignatedRouter;
        static const ydk::Enum::YLeaf otherDesignatedRouter;

};

class OSPFMIB::Ospfiftable::Ospfifentry::Ospfifmulticastforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicast;

};

class OSPFMIB::Ospflocallsdbtable::Ospflocallsdbentry::Ospflocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OSPFMIB::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routerLink;
        static const ydk::Enum::YLeaf networkLink;
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf asSummaryLink;
        static const ydk::Enum::YLeaf asExternalLink;
        static const ydk::Enum::YLeaf multicastLink;
        static const ydk::Enum::YLeaf nssaExternalLink;
        static const ydk::Enum::YLeaf areaOpaqueLink;

};

class OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf exchangeStart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;

};

class OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbmanbrpermanence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf permanent;

};

class OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OSPFMIB::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OSPFMIB::Ospfstubareatable::Ospfstubareaentry::Ospfstubmetrictype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfMetric;
        static const ydk::Enum::YLeaf comparableCost;
        static const ydk::Enum::YLeaf nonComparable;

};

class OSPFMIB::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class OSPFMIB::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::Ospfvirtlocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf exchangeStart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;

};

class OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OSPFMIB::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};


}
}

#endif /* _OSPF_MIB_ */

