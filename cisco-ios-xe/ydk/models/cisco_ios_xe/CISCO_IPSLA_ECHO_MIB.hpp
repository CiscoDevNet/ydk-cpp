#ifndef _CISCO_IPSLA_ECHO_MIB_
#define _CISCO_IPSLA_ECHO_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IPSLA_ECHO_MIB {

class CiscoIpslaEchoMib : public Entity
{
    public:
        CiscoIpslaEchoMib();
        ~CiscoIpslaEchoMib();

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

        class Cipslaicmpechotmpltable; //type: CiscoIpslaEchoMib::Cipslaicmpechotmpltable
        class Cipslaudpechotmpltable; //type: CiscoIpslaEchoMib::Cipslaudpechotmpltable
        class Cipslatcpconntmpltable; //type: CiscoIpslaEchoMib::Cipslatcpconntmpltable

        std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslaicmpechotmpltable> cipslaicmpechotmpltable_;
        std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslatcpconntmpltable> cipslatcpconntmpltable_;
        std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslaudpechotmpltable> cipslaudpechotmpltable_;
        
}; // CiscoIpslaEchoMib


class CiscoIpslaEchoMib::Cipslaicmpechotmpltable : public Entity
{
    public:
        Cipslaicmpechotmpltable();
        ~Cipslaicmpechotmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaicmpechotmplentry; //type: CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry> > cipslaicmpechotmplentry_;
        
}; // CiscoIpslaEchoMib::Cipslaicmpechotmpltable


class CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry : public Entity
{
    public:
        Cipslaicmpechotmplentry();
        ~Cipslaicmpechotmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaicmpechotmplname; //type: string
        YLeaf cipslaicmpechotmpldescription; //type: string
        YLeaf cipslaicmpechotmplsrcaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslaicmpechotmplsrcaddr; //type: binary
        YLeaf cipslaicmpechotmpltimeout; //type: uint32
        YLeaf cipslaicmpechotmplverifydata; //type: boolean
        YLeaf cipslaicmpechotmplreqdatasize; //type: uint32
        YLeaf cipslaicmpechotmpltos; //type: uint32
        YLeaf cipslaicmpechotmplvrfname; //type: string
        YLeaf cipslaicmpechotmplthreshold; //type: uint32
        YLeaf cipslaicmpechotmplhistlives; //type: uint32
        YLeaf cipslaicmpechotmplhistbuckets; //type: uint32
        YLeaf cipslaicmpechotmplhistfilter; //type: CipslaicmpechotmplhistfilterEnum
        YLeaf cipslaicmpechotmplstatshours; //type: uint32
        YLeaf cipslaicmpechotmpldistbuckets; //type: uint32
        YLeaf cipslaicmpechotmpldistinterval; //type: uint32
        YLeaf cipslaicmpechotmplstoragetype; //type: StoragetypeEnum
        YLeaf cipslaicmpechotmplrowstatus; //type: RowstatusEnum
        class CipslaicmpechotmplhistfilterEnum;

}; // CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry


class CiscoIpslaEchoMib::Cipslaudpechotmpltable : public Entity
{
    public:
        Cipslaudpechotmpltable();
        ~Cipslaudpechotmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslaudpechotmplentry; //type: CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry> > cipslaudpechotmplentry_;
        
}; // CiscoIpslaEchoMib::Cipslaudpechotmpltable


class CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry : public Entity
{
    public:
        Cipslaudpechotmplentry();
        ~Cipslaudpechotmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslaudpechotmplname; //type: string
        YLeaf cipslaudpechotmpldescription; //type: string
        YLeaf cipslaudpechotmplcontrolenable; //type: boolean
        YLeaf cipslaudpechotmplsrcaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslaudpechotmplsrcaddr; //type: binary
        YLeaf cipslaudpechotmplsrcport; //type: uint16
        YLeaf cipslaudpechotmpltimeout; //type: uint32
        YLeaf cipslaudpechotmplverifydata; //type: boolean
        YLeaf cipslaudpechotmplreqdatasize; //type: uint32
        YLeaf cipslaudpechotmpltos; //type: uint32
        YLeaf cipslaudpechotmplvrfname; //type: string
        YLeaf cipslaudpechotmplthreshold; //type: uint32
        YLeaf cipslaudpechotmplhistlives; //type: uint32
        YLeaf cipslaudpechotmplhistbuckets; //type: uint32
        YLeaf cipslaudpechotmplhistfilter; //type: CipslaudpechotmplhistfilterEnum
        YLeaf cipslaudpechotmplstatshours; //type: uint32
        YLeaf cipslaudpechotmpldistbuckets; //type: uint32
        YLeaf cipslaudpechotmpldistinterval; //type: uint32
        YLeaf cipslaudpechotmplstoragetype; //type: StoragetypeEnum
        YLeaf cipslaudpechotmplrowstatus; //type: RowstatusEnum
        class CipslaudpechotmplhistfilterEnum;

}; // CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry


class CiscoIpslaEchoMib::Cipslatcpconntmpltable : public Entity
{
    public:
        Cipslatcpconntmpltable();
        ~Cipslatcpconntmpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipslatcpconntmplentry; //type: CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry

        std::vector<std::shared_ptr<CISCO_IPSLA_ECHO_MIB::CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry> > cipslatcpconntmplentry_;
        
}; // CiscoIpslaEchoMib::Cipslatcpconntmpltable


class CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry : public Entity
{
    public:
        Cipslatcpconntmplentry();
        ~Cipslatcpconntmplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipslatcpconntmplname; //type: string
        YLeaf cipslatcpconntmpldescription; //type: string
        YLeaf cipslatcpconntmplcontrolenable; //type: boolean
        YLeaf cipslatcpconntmplsrcaddrtype; //type: InetaddresstypeEnum
        YLeaf cipslatcpconntmplsrcaddr; //type: binary
        YLeaf cipslatcpconntmplsrcport; //type: uint16
        YLeaf cipslatcpconntmpltimeout; //type: uint32
        YLeaf cipslatcpconntmplverifydata; //type: boolean
        YLeaf cipslatcpconntmpltos; //type: uint32
        YLeaf cipslatcpconntmplthreshold; //type: uint32
        YLeaf cipslatcpconntmplhistlives; //type: uint32
        YLeaf cipslatcpconntmplhistbuckets; //type: uint32
        YLeaf cipslatcpconntmplhistfilter; //type: CipslatcpconntmplhistfilterEnum
        YLeaf cipslatcpconntmplstatshours; //type: uint32
        YLeaf cipslatcpconntmpldistbuckets; //type: uint32
        YLeaf cipslatcpconntmpldistinterval; //type: uint32
        YLeaf cipslatcpconntmplstoragetype; //type: StoragetypeEnum
        YLeaf cipslatcpconntmplrowstatus; //type: RowstatusEnum
        class CipslatcpconntmplhistfilterEnum;

}; // CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry

class CiscoIpslaEchoMib::Cipslaicmpechotmpltable::Cipslaicmpechotmplentry::CipslaicmpechotmplhistfilterEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf all;
        static const Enum::YLeaf overThreshold;
        static const Enum::YLeaf failures;

};

class CiscoIpslaEchoMib::Cipslaudpechotmpltable::Cipslaudpechotmplentry::CipslaudpechotmplhistfilterEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf all;
        static const Enum::YLeaf overThreshold;
        static const Enum::YLeaf failures;

};

class CiscoIpslaEchoMib::Cipslatcpconntmpltable::Cipslatcpconntmplentry::CipslatcpconntmplhistfilterEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf all;
        static const Enum::YLeaf overThreshold;
        static const Enum::YLeaf failures;

};


}
}

#endif /* _CISCO_IPSLA_ECHO_MIB_ */

