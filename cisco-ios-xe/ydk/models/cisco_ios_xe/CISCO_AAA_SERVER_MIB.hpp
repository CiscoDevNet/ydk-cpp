#ifndef _CISCO_AAA_SERVER_MIB_
#define _CISCO_AAA_SERVER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_AAA_SERVER_MIB {

class CiscoAaaServerMib : public Entity
{
    public:
        CiscoAaaServerMib();
        ~CiscoAaaServerMib();

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

        class Casconfig; //type: CiscoAaaServerMib::Casconfig
        class Casconfigtable; //type: CiscoAaaServerMib::Casconfigtable

        std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfig> casconfig;
        std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfigtable> casconfigtable;
        
}; // CiscoAaaServerMib


class CiscoAaaServerMib::Casconfig : public Entity
{
    public:
        Casconfig();
        ~Casconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf casserverstatechangeenable; //type: boolean

}; // CiscoAaaServerMib::Casconfig


class CiscoAaaServerMib::Casconfigtable : public Entity
{
    public:
        Casconfigtable();
        ~Casconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Casconfigentry; //type: CiscoAaaServerMib::Casconfigtable::Casconfigentry

        std::vector<std::shared_ptr<CISCO_AAA_SERVER_MIB::CiscoAaaServerMib::Casconfigtable::Casconfigentry> > casconfigentry;
        
}; // CiscoAaaServerMib::Casconfigtable


class CiscoAaaServerMib::Casconfigtable::Casconfigentry : public Entity
{
    public:
        Casconfigentry();
        ~Casconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf casprotocol; //type: CiscoaaaprotocolEnum
        YLeaf casindex; //type: uint32
        YLeaf casaddress; //type: string
        YLeaf casauthenport; //type: int32
        YLeaf casacctport; //type: int32
        YLeaf caskey; //type: string
        YLeaf caspriority; //type: uint32
        YLeaf casconfigrowstatus; //type: RowstatusEnum
        YLeaf casauthenrequests; //type: uint32
        YLeaf casauthenrequesttimeouts; //type: uint32
        YLeaf casauthenunexpectedresponses; //type: uint32
        YLeaf casauthenservererrorresponses; //type: uint32
        YLeaf casauthenincorrectresponses; //type: uint32
        YLeaf casauthenresponsetime; //type: int32
        YLeaf casauthentransactionsuccesses; //type: uint32
        YLeaf casauthentransactionfailures; //type: uint32
        YLeaf casauthorrequests; //type: uint32
        YLeaf casauthorrequesttimeouts; //type: uint32
        YLeaf casauthorunexpectedresponses; //type: uint32
        YLeaf casauthorservererrorresponses; //type: uint32
        YLeaf casauthorincorrectresponses; //type: uint32
        YLeaf casauthorresponsetime; //type: int32
        YLeaf casauthortransactionsuccesses; //type: uint32
        YLeaf casauthortransactionfailures; //type: uint32
        YLeaf casacctrequests; //type: uint32
        YLeaf casacctrequesttimeouts; //type: uint32
        YLeaf casacctunexpectedresponses; //type: uint32
        YLeaf casacctservererrorresponses; //type: uint32
        YLeaf casacctincorrectresponses; //type: uint32
        YLeaf casacctresponsetime; //type: int32
        YLeaf casaccttransactionsuccesses; //type: uint32
        YLeaf casaccttransactionfailures; //type: uint32
        YLeaf casstate; //type: CasstateEnum
        YLeaf cascurrentstateduration; //type: int32
        YLeaf caspreviousstateduration; //type: int32
        YLeaf castotaldeadtime; //type: int32
        YLeaf casdeadcount; //type: uint32
        class CasstateEnum;

}; // CiscoAaaServerMib::Casconfigtable::Casconfigentry

class CiscoaaaprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf tacacsplus;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf kerberos;
        static const Enum::YLeaf ntlm;
        static const Enum::YLeaf sdi;
        static const Enum::YLeaf other;

};

class CiscoAaaServerMib::Casconfigtable::Casconfigentry::CasstateEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf dead;

};


}
}

#endif /* _CISCO_AAA_SERVER_MIB_ */

