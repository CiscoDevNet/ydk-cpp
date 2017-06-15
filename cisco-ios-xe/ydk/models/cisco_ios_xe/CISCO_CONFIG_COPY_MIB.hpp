#ifndef _CISCO_CONFIG_COPY_MIB_
#define _CISCO_CONFIG_COPY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_CONFIG_COPY_MIB {

class CiscoConfigCopyMib : public Entity
{
    public:
        CiscoConfigCopyMib();
        ~CiscoConfigCopyMib();

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

        class Cccopytable; //type: CiscoConfigCopyMib::Cccopytable
        class Cccopyerrortable; //type: CiscoConfigCopyMib::Cccopyerrortable

        std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopyerrortable> cccopyerrortable_;
        std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable> cccopytable_;
        
}; // CiscoConfigCopyMib


class CiscoConfigCopyMib::Cccopytable : public Entity
{
    public:
        Cccopytable();
        ~Cccopytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cccopyentry; //type: CiscoConfigCopyMib::Cccopytable::Cccopyentry

        std::vector<std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable::Cccopyentry> > cccopyentry_;
        
}; // CiscoConfigCopyMib::Cccopytable


class CiscoConfigCopyMib::Cccopytable::Cccopyentry : public Entity
{
    public:
        Cccopyentry();
        ~Cccopyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cccopyindex; //type: uint32
        YLeaf cccopyprotocol; //type: ConfigcopyprotocolEnum
        YLeaf cccopysourcefiletype; //type: ConfigfiletypeEnum
        YLeaf cccopydestfiletype; //type: ConfigfiletypeEnum
        YLeaf cccopyserveraddress; //type: string
        YLeaf cccopyfilename; //type: string
        YLeaf cccopyusername; //type: string
        YLeaf cccopyuserpassword; //type: string
        YLeaf cccopynotificationoncompletion; //type: boolean
        YLeaf cccopystate; //type: ConfigcopystateEnum
        YLeaf cccopytimestarted; //type: uint32
        YLeaf cccopytimecompleted; //type: uint32
        YLeaf cccopyfailcause; //type: ConfigcopyfailcauseEnum
        YLeaf cccopyentryrowstatus; //type: RowstatusEnum
        YLeaf cccopyserveraddresstype; //type: InetaddresstypeEnum
        YLeaf cccopyserveraddressrev1; //type: binary

}; // CiscoConfigCopyMib::Cccopytable::Cccopyentry


class CiscoConfigCopyMib::Cccopyerrortable : public Entity
{
    public:
        Cccopyerrortable();
        ~Cccopyerrortable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cccopyerrorentry; //type: CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry

        std::vector<std::shared_ptr<CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry> > cccopyerrorentry_;
        
}; // CiscoConfigCopyMib::Cccopyerrortable


class CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry : public Entity
{
    public:
        Cccopyerrorentry();
        ~Cccopyerrorentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_CONFIG_COPY_MIB::CiscoConfigCopyMib::Cccopytable::Cccopyentry::cccopyindex)
        YLeaf cccopyindex;
        YLeaf cccopyerrorindex; //type: uint32
        YLeaf cccopyerrordeviceipaddresstype; //type: InetaddresstypeEnum
        YLeaf cccopyerrordeviceipaddress; //type: binary
        YLeaf cccopyerrordevicewwn; //type: binary
        YLeaf cccopyerrordescription; //type: string

}; // CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry

class ConfigcopyfailcauseEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf badFileName;
        static const Enum::YLeaf timeout;
        static const Enum::YLeaf noMem;
        static const Enum::YLeaf noConfig;
        static const Enum::YLeaf unsupportedProtocol;
        static const Enum::YLeaf someConfigApplyFailed;
        static const Enum::YLeaf systemNotReady;
        static const Enum::YLeaf requestAborted;

};

class ConfigcopystateEnum : public Enum
{
    public:
        static const Enum::YLeaf waiting;
        static const Enum::YLeaf running;
        static const Enum::YLeaf successful;
        static const Enum::YLeaf failed;

};

class ConfigfiletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf networkFile;
        static const Enum::YLeaf iosFile;
        static const Enum::YLeaf startupConfig;
        static const Enum::YLeaf runningConfig;
        static const Enum::YLeaf terminal;
        static const Enum::YLeaf fabricStartupConfig;

};

class ConfigcopyprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf rcp;
        static const Enum::YLeaf scp;
        static const Enum::YLeaf sftp;

};


}
}

#endif /* _CISCO_CONFIG_COPY_MIB_ */

