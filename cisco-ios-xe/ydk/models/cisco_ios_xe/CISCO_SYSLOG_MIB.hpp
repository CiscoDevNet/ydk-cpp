#ifndef _CISCO_SYSLOG_MIB_
#define _CISCO_SYSLOG_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_SYSLOG_MIB {

class CiscoSyslogMib : public Entity
{
    public:
        CiscoSyslogMib();
        ~CiscoSyslogMib();

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

        class Clogbasic; //type: CiscoSyslogMib::Clogbasic
        class Cloghistory; //type: CiscoSyslogMib::Cloghistory
        class Clogserver; //type: CiscoSyslogMib::Clogserver
        class Cloghistorytable; //type: CiscoSyslogMib::Cloghistorytable
        class Clogserverconfigtable; //type: CiscoSyslogMib::Clogserverconfigtable

        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogbasic> clogbasic_;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistory> cloghistory_;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistorytable> cloghistorytable_;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserver> clogserver_;
        std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserverconfigtable> clogserverconfigtable_;
        
}; // CiscoSyslogMib


class CiscoSyslogMib::Clogbasic : public Entity
{
    public:
        Clogbasic();
        ~Clogbasic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clognotificationssent; //type: uint32
        YLeaf clognotificationsenabled; //type: boolean
        YLeaf clogmaxseverity; //type: SyslogseverityEnum
        YLeaf clogmsgignores; //type: uint32
        YLeaf clogmsgdrops; //type: uint32
        YLeaf clogoriginidtype; //type: ClogoriginidtypeEnum
        YLeaf clogoriginid; //type: string
        class ClogoriginidtypeEnum;

}; // CiscoSyslogMib::Clogbasic


class CiscoSyslogMib::Cloghistory : public Entity
{
    public:
        Cloghistory();
        ~Cloghistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cloghisttablemaxlength; //type: int32
        YLeaf cloghistmsgsflushed; //type: uint32

}; // CiscoSyslogMib::Cloghistory


class CiscoSyslogMib::Clogserver : public Entity
{
    public:
        Clogserver();
        ~Clogserver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clogmaxservers; //type: uint32

}; // CiscoSyslogMib::Clogserver


class CiscoSyslogMib::Cloghistorytable : public Entity
{
    public:
        Cloghistorytable();
        ~Cloghistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cloghistoryentry; //type: CiscoSyslogMib::Cloghistorytable::Cloghistoryentry

        std::vector<std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Cloghistorytable::Cloghistoryentry> > cloghistoryentry_;
        
}; // CiscoSyslogMib::Cloghistorytable


class CiscoSyslogMib::Cloghistorytable::Cloghistoryentry : public Entity
{
    public:
        Cloghistoryentry();
        ~Cloghistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cloghistindex; //type: int32
        YLeaf cloghistfacility; //type: string
        YLeaf cloghistseverity; //type: SyslogseverityEnum
        YLeaf cloghistmsgname; //type: string
        YLeaf cloghistmsgtext; //type: string
        YLeaf cloghisttimestamp; //type: uint32

}; // CiscoSyslogMib::Cloghistorytable::Cloghistoryentry


class CiscoSyslogMib::Clogserverconfigtable : public Entity
{
    public:
        Clogserverconfigtable();
        ~Clogserverconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Clogserverconfigentry; //type: CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry

        std::vector<std::shared_ptr<CISCO_SYSLOG_MIB::CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry> > clogserverconfigentry_;
        
}; // CiscoSyslogMib::Clogserverconfigtable


class CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry : public Entity
{
    public:
        Clogserverconfigentry();
        ~Clogserverconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf clogserveraddrtype; //type: InetaddresstypeEnum
        YLeaf clogserveraddr; //type: binary
        YLeaf clogserverstatus; //type: RowstatusEnum

}; // CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry

class SyslogseverityEnum : public Enum
{
    public:
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf info;
        static const Enum::YLeaf debug;

};

class CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf hostName;
        static const Enum::YLeaf ipv4Address;
        static const Enum::YLeaf contextName;
        static const Enum::YLeaf userDefined;

};


}
}

#endif /* _CISCO_SYSLOG_MIB_ */

