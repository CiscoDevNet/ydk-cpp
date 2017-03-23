#ifndef _CISCO_IOS_XR_PARSER_CFG_
#define _CISCO_IOS_XR_PARSER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_parser_cfg {

class Parser : public Entity
{
    public:
        Parser();
        ~Parser();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Indentation; //type: Parser::Indentation
        class Alias; //type: Parser::Alias
        class History; //type: Parser::History
        class InterfaceDisplay; //type: Parser::InterfaceDisplay
        class NetmaskFormat; //type: Parser::NetmaskFormat
        class Configuration; //type: Parser::Configuration
        class SubmodeExit; //type: Parser::SubmodeExit

        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias> alias;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Configuration> configuration;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::History> history;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Indentation> indentation;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::InterfaceDisplay> interface_display;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::NetmaskFormat> netmask_format;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::SubmodeExit> submode_exit;


}; // Parser


class Parser::Indentation : public Entity
{
    public:
        Indentation();
        ~Indentation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf indentation_disable; //type: boolean



}; // Parser::Indentation


class Parser::Alias : public Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Execs; //type: Parser::Alias::Execs
        class Configurations; //type: Parser::Alias::Configurations
        class Alls; //type: Parser::Alias::Alls

        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Alls> alls;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Configurations> configurations;
        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Execs> execs;


}; // Parser::Alias


class Parser::Alias::Execs : public Entity
{
    public:
        Execs();
        ~Execs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Exec; //type: Parser::Alias::Execs::Exec

        std::vector<std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Execs::Exec> > exec;


}; // Parser::Alias::Execs


class Parser::Alias::Execs::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf identifier; //type: string
        YLeaf identifier_xr; //type: string



}; // Parser::Alias::Execs::Exec


class Parser::Alias::Configurations : public Entity
{
    public:
        Configurations();
        ~Configurations();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Configuration; //type: Parser::Alias::Configurations::Configuration

        std::vector<std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Configurations::Configuration> > configuration;


}; // Parser::Alias::Configurations


class Parser::Alias::Configurations::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf identifier; //type: string
        YLeaf identifier_xr; //type: string



}; // Parser::Alias::Configurations::Configuration


class Parser::Alias::Alls : public Entity
{
    public:
        Alls();
        ~Alls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class All; //type: Parser::Alias::Alls::All

        std::vector<std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Alias::Alls::All> > all;


}; // Parser::Alias::Alls


class Parser::Alias::Alls::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf identifier; //type: string
        YLeaf identifier_xr; //type: string



}; // Parser::Alias::Alls::All


class Parser::History : public Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: uint32



}; // Parser::History


class Parser::InterfaceDisplay : public Entity
{
    public:
        InterfaceDisplay();
        ~InterfaceDisplay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slot_order; //type: boolean



}; // Parser::InterfaceDisplay


class Parser::NetmaskFormat : public Entity
{
    public:
        NetmaskFormat();
        ~NetmaskFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bit_count; //type: boolean



}; // Parser::NetmaskFormat


class Parser::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Disable; //type: Parser::Configuration::Disable

        std::shared_ptr<Cisco_IOS_XR_parser_cfg::Parser::Configuration::Disable> disable;


}; // Parser::Configuration


class Parser::Configuration::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf usergroup; //type: string



}; // Parser::Configuration::Disable


class Parser::SubmodeExit : public Entity
{
    public:
        SubmodeExit();
        ~SubmodeExit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: boolean



}; // Parser::SubmodeExit


}
}

#endif /* _CISCO_IOS_XR_PARSER_CFG_ */

