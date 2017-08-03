#ifndef _CISCO_IPSLA_JITTER_MIB_
#define _CISCO_IPSLA_JITTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IPSLA_JITTER_MIB {

class CiscoIpslaJitterMib : public ydk::Entity
{
    public:
        CiscoIpslaJitterMib();
        ~CiscoIpslaJitterMib();

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

        class Cipslaudpjittertmpltable; //type: CiscoIpslaJitterMib::Cipslaudpjittertmpltable
        class Cipslaicmpjittertmpltable; //type: CiscoIpslaJitterMib::Cipslaicmpjittertmpltable

        std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaicmpjittertmpltable> cipslaicmpjittertmpltable;
        std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaudpjittertmpltable> cipslaudpjittertmpltable;
        
}; // CiscoIpslaJitterMib


class CiscoIpslaJitterMib::Cipslaudpjittertmpltable : public ydk::Entity
{
    public:
        Cipslaudpjittertmpltable();
        ~Cipslaudpjittertmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslaudpjittertmplentry; //type: CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry> > cipslaudpjittertmplentry;
        
}; // CiscoIpslaJitterMib::Cipslaudpjittertmpltable


class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry : public ydk::Entity
{
    public:
        Cipslaudpjittertmplentry();
        ~Cipslaudpjittertmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaudpjittertmplname; //type: string
        ydk::YLeaf cipslaudpjittertmpldescription; //type: string
        ydk::YLeaf cipslaudpjittertmplcontrolenable; //type: boolean
        ydk::YLeaf cipslaudpjittertmpltimeout; //type: uint32
        ydk::YLeaf cipslaudpjittertmplverifydata; //type: boolean
        ydk::YLeaf cipslaudpjittertmplcodectype; //type: Ipslacodectype
        ydk::YLeaf cipslaudpjittertmplcodecinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplcodecpayload; //type: uint32
        ydk::YLeaf cipslaudpjittertmplcodecnumpkts; //type: uint32
        ydk::YLeaf cipslaudpjittertmplinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplnumpkts; //type: uint32
        ydk::YLeaf cipslaudpjittertmplsrcaddrtype; //type: Inetaddresstype
        ydk::YLeaf cipslaudpjittertmplsrcaddr; //type: binary
        ydk::YLeaf cipslaudpjittertmplsrcport; //type: uint16
        ydk::YLeaf cipslaudpjittertmplprecision; //type: Cipslaudpjittertmplprecision
        ydk::YLeaf cipslaudpjittertmplreqdatasize; //type: uint32
        ydk::YLeaf cipslaudpjittertmplpktpriority; //type: Cipslaudpjittertmplpktpriority
        ydk::YLeaf cipslaudpjittertmpltos; //type: uint32
        ydk::YLeaf cipslaudpjittertmplvrfname; //type: string
        ydk::YLeaf cipslaudpjittertmplthreshold; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptolabs; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptolpct; //type: uint32
        ydk::YLeaf cipslaudpjittertmplntptoltype; //type: Cipslaudpjittertmplntptoltype
        ydk::YLeaf cipslaudpjittertmplicpiffactor; //type: uint32
        ydk::YLeaf cipslaudpjittertmplstatshours; //type: uint32
        ydk::YLeaf cipslaudpjittertmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaudpjittertmpldistinterval; //type: uint32
        ydk::YLeaf cipslaudpjittertmplstoragetype; //type: Storagetype
        ydk::YLeaf cipslaudpjittertmplrowstatus; //type: Rowstatus
        class Cipslaudpjittertmplprecision;
        class Cipslaudpjittertmplpktpriority;
        class Cipslaudpjittertmplntptoltype;

}; // CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry


class CiscoIpslaJitterMib::Cipslaicmpjittertmpltable : public ydk::Entity
{
    public:
        Cipslaicmpjittertmpltable();
        ~Cipslaicmpjittertmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipslaicmpjittertmplentry; //type: CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry> > cipslaicmpjittertmplentry;
        
}; // CiscoIpslaJitterMib::Cipslaicmpjittertmpltable


class CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry : public ydk::Entity
{
    public:
        Cipslaicmpjittertmplentry();
        ~Cipslaicmpjittertmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipslaicmpjittertmplname; //type: string
        ydk::YLeaf cipslaicmpjittertmpldescription; //type: string
        ydk::YLeaf cipslaicmpjittertmpltimeout; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplverifydata; //type: boolean
        ydk::YLeaf cipslaicmpjittertmplnumpkts; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplinterval; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplsrcaddrtype; //type: Inetaddresstype
        ydk::YLeaf cipslaicmpjittertmplsrcaddr; //type: binary
        ydk::YLeaf cipslaicmpjittertmpltos; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplvrfname; //type: string
        ydk::YLeaf cipslaicmpjittertmplthreshold; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplstatshours; //type: uint32
        ydk::YLeaf cipslaicmpjittertmpldistbuckets; //type: uint32
        ydk::YLeaf cipslaicmpjittertmpldistinterval; //type: uint32
        ydk::YLeaf cipslaicmpjittertmplstoragetype; //type: Storagetype
        ydk::YLeaf cipslaicmpjittertmplrowstatus; //type: Rowstatus

}; // CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplprecision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf microseconds;

};

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplpktpriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf high;

};

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::Cipslaudpjittertmplntptoltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf absolute;

};


}
}

#endif /* _CISCO_IPSLA_JITTER_MIB_ */

