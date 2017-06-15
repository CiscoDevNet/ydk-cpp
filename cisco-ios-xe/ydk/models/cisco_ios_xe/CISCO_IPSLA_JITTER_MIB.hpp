#ifndef _CISCO_IPSLA_JITTER_MIB_
#define _CISCO_IPSLA_JITTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IPSLA_JITTER_MIB {

class CiscoIpslaJitterMib : public Entity
{
    public:
        CiscoIpslaJitterMib();
        ~CiscoIpslaJitterMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cipslaudpjittertmpltable; //type: CiscoIpslaJitterMib::Cipslaudpjittertmpltable
        class Cipslaicmpjittertmpltable; //type: CiscoIpslaJitterMib::Cipslaicmpjittertmpltable

        std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaicmpjittertmpltable> cipslaicmpjittertmpltable_;
        std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaudpjittertmpltable> cipslaudpjittertmpltable_;
        
}; // CiscoIpslaJitterMib


class CiscoIpslaJitterMib::Cipslaudpjittertmpltable : public Entity
{
    public:
        Cipslaudpjittertmpltable();
        ~Cipslaudpjittertmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaudpjittertmplentry; //type: CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry> > cipslaudpjittertmplentry_;
        
}; // CiscoIpslaJitterMib::Cipslaudpjittertmpltable


class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry : public Entity
{
    public:
        Cipslaudpjittertmplentry();
        ~Cipslaudpjittertmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaudpjittertmplname; //type: string
        YLeaf cipslaudpjittertmpldescription; //type: string
        YLeaf cipslaudpjittertmplcontrolenable; //type: boolean
        YLeaf cipslaudpjittertmpltimeout; //type: uint32
        YLeaf cipslaudpjittertmplverifydata; //type: boolean
        YLeaf cipslaudpjittertmplcodectype; //type: IpslacodectypeEnum
        YLeaf cipslaudpjittertmplcodecinterval; //type: uint32
        YLeaf cipslaudpjittertmplcodecpayload; //type: uint32
        YLeaf cipslaudpjittertmplcodecnumpkts; //type: uint32
        YLeaf cipslaudpjittertmplinterval; //type: uint32
        YLeaf cipslaudpjittertmplnumpkts; //type: uint32
        YLeaf cipslaudpjittertmplsrcaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslaudpjittertmplsrcaddr; //type: binary
        YLeaf cipslaudpjittertmplsrcport; //type: uint16
        YLeaf cipslaudpjittertmplprecision; //type: CipslaudpjittertmplprecisionEnum
        YLeaf cipslaudpjittertmplreqdatasize; //type: uint32
        YLeaf cipslaudpjittertmplpktpriority; //type: CipslaudpjittertmplpktpriorityEnum
        YLeaf cipslaudpjittertmpltos; //type: uint32
        YLeaf cipslaudpjittertmplvrfname; //type: string
        YLeaf cipslaudpjittertmplthreshold; //type: uint32
        YLeaf cipslaudpjittertmplntptolabs; //type: uint32
        YLeaf cipslaudpjittertmplntptolpct; //type: uint32
        YLeaf cipslaudpjittertmplntptoltype; //type: CipslaudpjittertmplntptoltypeEnum
        YLeaf cipslaudpjittertmplicpiffactor; //type: uint32
        YLeaf cipslaudpjittertmplstatshours; //type: uint32
        YLeaf cipslaudpjittertmpldistbuckets; //type: uint32
        YLeaf cipslaudpjittertmpldistinterval; //type: uint32
        YLeaf cipslaudpjittertmplstoragetype; //type: StoragetypeEnum
        YLeaf cipslaudpjittertmplrowstatus; //type: RowstatusEnum
        class CipslaudpjittertmplprecisionEnum;
        class CipslaudpjittertmplpktpriorityEnum;
        class CipslaudpjittertmplntptoltypeEnum;

}; // CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry


class CiscoIpslaJitterMib::Cipslaicmpjittertmpltable : public Entity
{
    public:
        Cipslaicmpjittertmpltable();
        ~Cipslaicmpjittertmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaicmpjittertmplentry; //type: CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_JITTER_MIB::CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry> > cipslaicmpjittertmplentry_;
        
}; // CiscoIpslaJitterMib::Cipslaicmpjittertmpltable


class CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry : public Entity
{
    public:
        Cipslaicmpjittertmplentry();
        ~Cipslaicmpjittertmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaicmpjittertmplname; //type: string
        YLeaf cipslaicmpjittertmpldescription; //type: string
        YLeaf cipslaicmpjittertmpltimeout; //type: uint32
        YLeaf cipslaicmpjittertmplverifydata; //type: boolean
        YLeaf cipslaicmpjittertmplnumpkts; //type: uint32
        YLeaf cipslaicmpjittertmplinterval; //type: uint32
        YLeaf cipslaicmpjittertmplsrcaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslaicmpjittertmplsrcaddr; //type: binary
        YLeaf cipslaicmpjittertmpltos; //type: uint32
        YLeaf cipslaicmpjittertmplvrfname; //type: string
        YLeaf cipslaicmpjittertmplthreshold; //type: uint32
        YLeaf cipslaicmpjittertmplstatshours; //type: uint32
        YLeaf cipslaicmpjittertmpldistbuckets; //type: uint32
        YLeaf cipslaicmpjittertmpldistinterval; //type: uint32
        YLeaf cipslaicmpjittertmplstoragetype; //type: StoragetypeEnum
        YLeaf cipslaicmpjittertmplrowstatus; //type: RowstatusEnum

}; // CiscoIpslaJitterMib::Cipslaicmpjittertmpltable::Cipslaicmpjittertmplentry

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplprecisionEnum : public Enum
{
    public:
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf microseconds;

};

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplpktpriorityEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf high;

};

class CiscoIpslaJitterMib::Cipslaudpjittertmpltable::Cipslaudpjittertmplentry::CipslaudpjittertmplntptoltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf percent;
        static const Enum::YLeaf absolute;

};


}
}

#endif /* _CISCO_IPSLA_JITTER_MIB_ */

