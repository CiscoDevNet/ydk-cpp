#ifndef _OSPF_MIB_
#define _OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace OSPF_MIB {

class OspfMib : public ydk::Entity
{
    public:
        OspfMib();
        ~OspfMib();

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

        class Ospfgeneralgroup; //type: OspfMib::Ospfgeneralgroup
        class Ospfareatable; //type: OspfMib::Ospfareatable
        class Ospfstubareatable; //type: OspfMib::Ospfstubareatable
        class Ospflsdbtable; //type: OspfMib::Ospflsdbtable
        class Ospfarearangetable; //type: OspfMib::Ospfarearangetable
        class Ospfhosttable; //type: OspfMib::Ospfhosttable
        class Ospfiftable; //type: OspfMib::Ospfiftable
        class Ospfifmetrictable; //type: OspfMib::Ospfifmetrictable
        class Ospfvirtiftable; //type: OspfMib::Ospfvirtiftable
        class Ospfnbrtable; //type: OspfMib::Ospfnbrtable
        class Ospfvirtnbrtable; //type: OspfMib::Ospfvirtnbrtable
        class Ospfextlsdbtable; //type: OspfMib::Ospfextlsdbtable
        class Ospfareaaggregatetable; //type: OspfMib::Ospfareaaggregatetable
        class Ospflocallsdbtable; //type: OspfMib::Ospflocallsdbtable
        class Ospfvirtlocallsdbtable; //type: OspfMib::Ospfvirtlocallsdbtable
        class Ospfaslsdbtable; //type: OspfMib::Ospfaslsdbtable
        class Ospfarealsacounttable; //type: OspfMib::Ospfarealsacounttable

        std::shared_ptr<OSPF_MIB::OspfMib::Ospfareaaggregatetable> ospfareaaggregatetable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfarealsacounttable> ospfarealsacounttable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfarearangetable> ospfarearangetable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfareatable> ospfareatable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfaslsdbtable> ospfaslsdbtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfextlsdbtable> ospfextlsdbtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfgeneralgroup> ospfgeneralgroup;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfhosttable> ospfhosttable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfifmetrictable> ospfifmetrictable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfiftable> ospfiftable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospflocallsdbtable> ospflocallsdbtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospflsdbtable> ospflsdbtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfnbrtable> ospfnbrtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfstubareatable> ospfstubareatable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtiftable> ospfvirtiftable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtlocallsdbtable> ospfvirtlocallsdbtable;
        std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtnbrtable> ospfvirtnbrtable;
        
}; // OspfMib


class OspfMib::Ospfgeneralgroup : public ydk::Entity
{
    public:
        Ospfgeneralgroup();
        ~Ospfgeneralgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // OspfMib::Ospfgeneralgroup


class OspfMib::Ospfareatable : public ydk::Entity
{
    public:
        Ospfareatable();
        ~Ospfareatable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfareaentry; //type: OspfMib::Ospfareatable::Ospfareaentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfareatable::Ospfareaentry> > ospfareaentry;
        
}; // OspfMib::Ospfareatable


class OspfMib::Ospfareatable::Ospfareaentry : public ydk::Entity
{
    public:
        Ospfareaentry();
        ~Ospfareaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfareaid; //type: string
        ydk::YLeaf ospfauthtype; //type: Ospfauthenticationtype
        ydk::YLeaf ospfimportasextern; //type: Ospfimportasextern
        ydk::YLeaf ospfspfruns; //type: uint32
        ydk::YLeaf ospfareabdrrtrcount; //type: uint32
        ydk::YLeaf ospfasbdrrtrcount; //type: uint32
        ydk::YLeaf ospfarealsacount; //type: uint32
        ydk::YLeaf ospfarealsacksumsum; //type: int32
        ydk::YLeaf ospfareasummary; //type: Ospfareasummary
        ydk::YLeaf ospfareastatus; //type: Rowstatus
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

}; // OspfMib::Ospfareatable::Ospfareaentry


class OspfMib::Ospfstubareatable : public ydk::Entity
{
    public:
        Ospfstubareatable();
        ~Ospfstubareatable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfstubareaentry; //type: OspfMib::Ospfstubareatable::Ospfstubareaentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfstubareatable::Ospfstubareaentry> > ospfstubareaentry;
        
}; // OspfMib::Ospfstubareatable


class OspfMib::Ospfstubareatable::Ospfstubareaentry : public ydk::Entity
{
    public:
        Ospfstubareaentry();
        ~Ospfstubareaentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfstubareaid; //type: string
        ydk::YLeaf ospfstubtos; //type: int32
        ydk::YLeaf ospfstubmetric; //type: int32
        ydk::YLeaf ospfstubstatus; //type: Rowstatus
        ydk::YLeaf ospfstubmetrictype; //type: Ospfstubmetrictype
        class Ospfstubmetrictype;

}; // OspfMib::Ospfstubareatable::Ospfstubareaentry


class OspfMib::Ospflsdbtable : public ydk::Entity
{
    public:
        Ospflsdbtable();
        ~Ospflsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospflsdbentry; //type: OspfMib::Ospflsdbtable::Ospflsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry> > ospflsdbentry;
        
}; // OspfMib::Ospflsdbtable


class OspfMib::Ospflsdbtable::Ospflsdbentry : public ydk::Entity
{
    public:
        Ospflsdbentry();
        ~Ospflsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospflsdbareaid; //type: string
        ydk::YLeaf ospflsdbtype; //type: Ospflsdbtype
        ydk::YLeaf ospflsdblsid; //type: string
        ydk::YLeaf ospflsdbrouterid; //type: string
        ydk::YLeaf ospflsdbsequence; //type: int32
        ydk::YLeaf ospflsdbage; //type: int32
        ydk::YLeaf ospflsdbchecksum; //type: int32
        ydk::YLeaf ospflsdbadvertisement; //type: binary
        class Ospflsdbtype;

}; // OspfMib::Ospflsdbtable::Ospflsdbentry


class OspfMib::Ospfarearangetable : public ydk::Entity
{
    public:
        Ospfarearangetable();
        ~Ospfarearangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfarearangeentry; //type: OspfMib::Ospfarearangetable::Ospfarearangeentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfarearangetable::Ospfarearangeentry> > ospfarearangeentry;
        
}; // OspfMib::Ospfarearangetable


class OspfMib::Ospfarearangetable::Ospfarearangeentry : public ydk::Entity
{
    public:
        Ospfarearangeentry();
        ~Ospfarearangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfarearangeareaid; //type: string
        ydk::YLeaf ospfarearangenet; //type: string
        ydk::YLeaf ospfarearangemask; //type: string
        ydk::YLeaf ospfarearangestatus; //type: Rowstatus
        ydk::YLeaf ospfarearangeeffect; //type: Ospfarearangeeffect
        class Ospfarearangeeffect;

}; // OspfMib::Ospfarearangetable::Ospfarearangeentry


class OspfMib::Ospfhosttable : public ydk::Entity
{
    public:
        Ospfhosttable();
        ~Ospfhosttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfhostentry; //type: OspfMib::Ospfhosttable::Ospfhostentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfhosttable::Ospfhostentry> > ospfhostentry;
        
}; // OspfMib::Ospfhosttable


class OspfMib::Ospfhosttable::Ospfhostentry : public ydk::Entity
{
    public:
        Ospfhostentry();
        ~Ospfhostentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfhostipaddress; //type: string
        ydk::YLeaf ospfhosttos; //type: int32
        ydk::YLeaf ospfhostmetric; //type: int32
        ydk::YLeaf ospfhoststatus; //type: Rowstatus
        ydk::YLeaf ospfhostareaid; //type: string
        ydk::YLeaf ospfhostcfgareaid; //type: string

}; // OspfMib::Ospfhosttable::Ospfhostentry


class OspfMib::Ospfiftable : public ydk::Entity
{
    public:
        Ospfiftable();
        ~Ospfiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfifentry; //type: OspfMib::Ospfiftable::Ospfifentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfiftable::Ospfifentry> > ospfifentry;
        
}; // OspfMib::Ospfiftable


class OspfMib::Ospfiftable::Ospfifentry : public ydk::Entity
{
    public:
        Ospfifentry();
        ~Ospfifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf ospfifstatus; //type: Rowstatus
        ydk::YLeaf ospfifmulticastforwarding; //type: Ospfifmulticastforwarding
        ydk::YLeaf ospfifdemand; //type: boolean
        ydk::YLeaf ospfifauthtype; //type: Ospfauthenticationtype
        ydk::YLeaf ospfiflsacount; //type: uint32
        ydk::YLeaf ospfiflsacksumsum; //type: uint32
        ydk::YLeaf ospfifdesignatedrouterid; //type: string
        ydk::YLeaf ospfifbackupdesignatedrouterid; //type: string
        ydk::YLeaf cospfiflsacount; //type: uint32
        ydk::YLeaf cospfiflsacksumsum; //type: uint32
        class Ospfiftype;
        class Ospfifstate;
        class Ospfifmulticastforwarding;

}; // OspfMib::Ospfiftable::Ospfifentry


class OspfMib::Ospfifmetrictable : public ydk::Entity
{
    public:
        Ospfifmetrictable();
        ~Ospfifmetrictable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfifmetricentry; //type: OspfMib::Ospfifmetrictable::Ospfifmetricentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfifmetrictable::Ospfifmetricentry> > ospfifmetricentry;
        
}; // OspfMib::Ospfifmetrictable


class OspfMib::Ospfifmetrictable::Ospfifmetricentry : public ydk::Entity
{
    public:
        Ospfifmetricentry();
        ~Ospfifmetricentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfifmetricipaddress; //type: string
        ydk::YLeaf ospfifmetricaddresslessif; //type: int32
        ydk::YLeaf ospfifmetrictos; //type: int32
        ydk::YLeaf ospfifmetricvalue; //type: int32
        ydk::YLeaf ospfifmetricstatus; //type: Rowstatus

}; // OspfMib::Ospfifmetrictable::Ospfifmetricentry


class OspfMib::Ospfvirtiftable : public ydk::Entity
{
    public:
        Ospfvirtiftable();
        ~Ospfvirtiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfvirtifentry; //type: OspfMib::Ospfvirtiftable::Ospfvirtifentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtiftable::Ospfvirtifentry> > ospfvirtifentry;
        
}; // OspfMib::Ospfvirtiftable


class OspfMib::Ospfvirtiftable::Ospfvirtifentry : public ydk::Entity
{
    public:
        Ospfvirtifentry();
        ~Ospfvirtifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfvirtifareaid; //type: string
        ydk::YLeaf ospfvirtifneighbor; //type: string
        ydk::YLeaf ospfvirtiftransitdelay; //type: int32
        ydk::YLeaf ospfvirtifretransinterval; //type: int32
        ydk::YLeaf ospfvirtifhellointerval; //type: int32
        ydk::YLeaf ospfvirtifrtrdeadinterval; //type: int32
        ydk::YLeaf ospfvirtifstate; //type: Ospfvirtifstate
        ydk::YLeaf ospfvirtifevents; //type: uint32
        ydk::YLeaf ospfvirtifauthkey; //type: binary
        ydk::YLeaf ospfvirtifstatus; //type: Rowstatus
        ydk::YLeaf ospfvirtifauthtype; //type: Ospfauthenticationtype
        ydk::YLeaf ospfvirtiflsacount; //type: uint32
        ydk::YLeaf ospfvirtiflsacksumsum; //type: uint32
        ydk::YLeaf cospfvirtiflsacount; //type: uint32
        ydk::YLeaf cospfvirtiflsacksumsum; //type: uint32
        class Ospfvirtifstate;

}; // OspfMib::Ospfvirtiftable::Ospfvirtifentry


class OspfMib::Ospfnbrtable : public ydk::Entity
{
    public:
        Ospfnbrtable();
        ~Ospfnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfnbrentry; //type: OspfMib::Ospfnbrtable::Ospfnbrentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfnbrtable::Ospfnbrentry> > ospfnbrentry;
        
}; // OspfMib::Ospfnbrtable


class OspfMib::Ospfnbrtable::Ospfnbrentry : public ydk::Entity
{
    public:
        Ospfnbrentry();
        ~Ospfnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfnbripaddr; //type: string
        ydk::YLeaf ospfnbraddresslessindex; //type: int32
        ydk::YLeaf ospfnbrrtrid; //type: string
        ydk::YLeaf ospfnbroptions; //type: int32
        ydk::YLeaf ospfnbrpriority; //type: int32
        ydk::YLeaf ospfnbrstate; //type: Ospfnbrstate
        ydk::YLeaf ospfnbrevents; //type: uint32
        ydk::YLeaf ospfnbrlsretransqlen; //type: uint32
        ydk::YLeaf ospfnbmanbrstatus; //type: Rowstatus
        ydk::YLeaf ospfnbmanbrpermanence; //type: Ospfnbmanbrpermanence
        ydk::YLeaf ospfnbrhellosuppressed; //type: boolean
        ydk::YLeaf ospfnbrrestarthelperstatus; //type: Ospfnbrrestarthelperstatus
        ydk::YLeaf ospfnbrrestarthelperage; //type: uint32
        ydk::YLeaf ospfnbrrestarthelperexitreason; //type: Ospfnbrrestarthelperexitreason
        class Ospfnbrstate;
        class Ospfnbmanbrpermanence;
        class Ospfnbrrestarthelperstatus;
        class Ospfnbrrestarthelperexitreason;

}; // OspfMib::Ospfnbrtable::Ospfnbrentry


class OspfMib::Ospfvirtnbrtable : public ydk::Entity
{
    public:
        Ospfvirtnbrtable();
        ~Ospfvirtnbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfvirtnbrentry; //type: OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry> > ospfvirtnbrentry;
        
}; // OspfMib::Ospfvirtnbrtable


class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry : public ydk::Entity
{
    public:
        Ospfvirtnbrentry();
        ~Ospfvirtnbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry


class OspfMib::Ospfextlsdbtable : public ydk::Entity
{
    public:
        Ospfextlsdbtable();
        ~Ospfextlsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfextlsdbentry; //type: OspfMib::Ospfextlsdbtable::Ospfextlsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfextlsdbtable::Ospfextlsdbentry> > ospfextlsdbentry;
        
}; // OspfMib::Ospfextlsdbtable


class OspfMib::Ospfextlsdbtable::Ospfextlsdbentry : public ydk::Entity
{
    public:
        Ospfextlsdbentry();
        ~Ospfextlsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfextlsdbtype; //type: Ospfextlsdbtype
        ydk::YLeaf ospfextlsdblsid; //type: string
        ydk::YLeaf ospfextlsdbrouterid; //type: string
        ydk::YLeaf ospfextlsdbsequence; //type: int32
        ydk::YLeaf ospfextlsdbage; //type: int32
        ydk::YLeaf ospfextlsdbchecksum; //type: int32
        ydk::YLeaf ospfextlsdbadvertisement; //type: binary
        class Ospfextlsdbtype;

}; // OspfMib::Ospfextlsdbtable::Ospfextlsdbentry


class OspfMib::Ospfareaaggregatetable : public ydk::Entity
{
    public:
        Ospfareaaggregatetable();
        ~Ospfareaaggregatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfareaaggregateentry; //type: OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry> > ospfareaaggregateentry;
        
}; // OspfMib::Ospfareaaggregatetable


class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry : public ydk::Entity
{
    public:
        Ospfareaaggregateentry();
        ~Ospfareaaggregateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfareaaggregateareaid; //type: string
        ydk::YLeaf ospfareaaggregatelsdbtype; //type: Ospfareaaggregatelsdbtype
        ydk::YLeaf ospfareaaggregatenet; //type: string
        ydk::YLeaf ospfareaaggregatemask; //type: string
        ydk::YLeaf ospfareaaggregatestatus; //type: Rowstatus
        ydk::YLeaf ospfareaaggregateeffect; //type: Ospfareaaggregateeffect
        ydk::YLeaf ospfareaaggregateextroutetag; //type: uint32
        class Ospfareaaggregatelsdbtype;
        class Ospfareaaggregateeffect;

}; // OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry


class OspfMib::Ospflocallsdbtable : public ydk::Entity
{
    public:
        Ospflocallsdbtable();
        ~Ospflocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospflocallsdbentry; //type: OspfMib::Ospflocallsdbtable::Ospflocallsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospflocallsdbtable::Ospflocallsdbentry> > ospflocallsdbentry;
        
}; // OspfMib::Ospflocallsdbtable


class OspfMib::Ospflocallsdbtable::Ospflocallsdbentry : public ydk::Entity
{
    public:
        Ospflocallsdbentry();
        ~Ospflocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // OspfMib::Ospflocallsdbtable::Ospflocallsdbentry


class OspfMib::Ospfvirtlocallsdbtable : public ydk::Entity
{
    public:
        Ospfvirtlocallsdbtable();
        ~Ospfvirtlocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfvirtlocallsdbentry; //type: OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry> > ospfvirtlocallsdbentry;
        
}; // OspfMib::Ospfvirtlocallsdbtable


class OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry : public ydk::Entity
{
    public:
        Ospfvirtlocallsdbentry();
        ~Ospfvirtlocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry


class OspfMib::Ospfaslsdbtable : public ydk::Entity
{
    public:
        Ospfaslsdbtable();
        ~Ospfaslsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfaslsdbentry; //type: OspfMib::Ospfaslsdbtable::Ospfaslsdbentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfaslsdbtable::Ospfaslsdbentry> > ospfaslsdbentry;
        
}; // OspfMib::Ospfaslsdbtable


class OspfMib::Ospfaslsdbtable::Ospfaslsdbentry : public ydk::Entity
{
    public:
        Ospfaslsdbentry();
        ~Ospfaslsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfaslsdbtype; //type: Ospfaslsdbtype
        ydk::YLeaf ospfaslsdblsid; //type: string
        ydk::YLeaf ospfaslsdbrouterid; //type: string
        ydk::YLeaf ospfaslsdbsequence; //type: int32
        ydk::YLeaf ospfaslsdbage; //type: int32
        ydk::YLeaf ospfaslsdbchecksum; //type: int32
        ydk::YLeaf ospfaslsdbadvertisement; //type: binary
        class Ospfaslsdbtype;

}; // OspfMib::Ospfaslsdbtable::Ospfaslsdbentry


class OspfMib::Ospfarealsacounttable : public ydk::Entity
{
    public:
        Ospfarealsacounttable();
        ~Ospfarealsacounttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ospfarealsacountentry; //type: OspfMib::Ospfarealsacounttable::Ospfarealsacountentry

        std::vector<std::shared_ptr<OSPF_MIB::OspfMib::Ospfarealsacounttable::Ospfarealsacountentry> > ospfarealsacountentry;
        
}; // OspfMib::Ospfarealsacounttable


class OspfMib::Ospfarealsacounttable::Ospfarealsacountentry : public ydk::Entity
{
    public:
        Ospfarealsacountentry();
        ~Ospfarealsacountentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ospfarealsacountareaid; //type: string
        ydk::YLeaf ospfarealsacountlsatype; //type: Ospfarealsacountlsatype
        ydk::YLeaf ospfarealsacountnumber; //type: uint32
        class Ospfarealsacountlsatype;

}; // OspfMib::Ospfarealsacounttable::Ospfarealsacountentry

class Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class Ospfauthenticationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simplePassword;
        static const ydk::Enum::YLeaf md5;

};

class OspfMib::Ospfgeneralgroup::Ospfversionnumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version2;

};

class OspfMib::Ospfgeneralgroup::Ospfrestartsupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf plannedOnly;
        static const ydk::Enum::YLeaf plannedAndUnplanned;

};

class OspfMib::Ospfgeneralgroup::Ospfrestartstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notRestarting;
        static const ydk::Enum::YLeaf plannedRestart;
        static const ydk::Enum::YLeaf unplannedRestart;

};

class OspfMib::Ospfgeneralgroup::Ospfrestartexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfgeneralgroup::Ospfstubrouteradvertisement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf doNotAdvertise;
        static const ydk::Enum::YLeaf advertise;

};

class OspfMib::Ospfareatable::Ospfareaentry::Ospfimportasextern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf importExternal;
        static const ydk::Enum::YLeaf importNoExternal;
        static const ydk::Enum::YLeaf importNssa;

};

class OspfMib::Ospfareatable::Ospfareaentry::Ospfareasummary : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAreaSummary;
        static const ydk::Enum::YLeaf sendAreaSummary;

};

class OspfMib::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OspfMib::Ospfareatable::Ospfareaentry::Ospfareanssatranslatorstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OspfMib::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OspfMib::Ospfareatable::Ospfareaentry::Cospfareanssatranslatorstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OspfMib::Ospfstubareatable::Ospfstubareaentry::Ospfstubmetrictype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfMetric;
        static const ydk::Enum::YLeaf comparableCost;
        static const ydk::Enum::YLeaf nonComparable;

};

class OspfMib::Ospflsdbtable::Ospflsdbentry::Ospflsdbtype : public ydk::Enum
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

class OspfMib::Ospfarearangetable::Ospfarearangeentry::Ospfarearangeeffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OspfMib::Ospfiftable::Ospfifentry::Ospfiftype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf nbma;
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf pointToMultipoint;

};

class OspfMib::Ospfiftable::Ospfifentry::Ospfifstate : public ydk::Enum
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

class OspfMib::Ospfiftable::Ospfifentry::Ospfifmulticastforwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicast;

};

class OspfMib::Ospfvirtiftable::Ospfvirtifentry::Ospfvirtifstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::Ospfnbrstate : public ydk::Enum
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

class OspfMib::Ospfnbrtable::Ospfnbrentry::Ospfnbmanbrpermanence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf permanent;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OspfMib::Ospfnbrtable::Ospfnbrentry::Ospfnbrrestarthelperexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrstate : public ydk::Enum
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

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OspfMib::Ospfvirtnbrtable::Ospfvirtnbrentry::Ospfvirtnbrrestarthelperexitreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OspfMib::Ospfextlsdbtable::Ospfextlsdbentry::Ospfextlsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;

};

class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregatelsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf nssaExternalLink;

};

class OspfMib::Ospfareaaggregatetable::Ospfareaaggregateentry::Ospfareaaggregateeffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OspfMib::Ospflocallsdbtable::Ospflocallsdbentry::Ospflocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OspfMib::Ospfvirtlocallsdbtable::Ospfvirtlocallsdbentry::Ospfvirtlocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OspfMib::Ospfaslsdbtable::Ospfaslsdbentry::Ospfaslsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class OspfMib::Ospfarealsacounttable::Ospfarealsacountentry::Ospfarealsacountlsatype : public ydk::Enum
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


}
}

#endif /* _OSPF_MIB_ */

