#ifndef _CISCO_IOS_XE_NATIVE_168_
#define _CISCO_IOS_XE_NATIVE_168_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_167.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Otv::Isis::Overlay::Default_::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: empty

}; // Native::Otv::Isis::Overlay::Default_::Skeptical


class Native::Otv::Isis::Overlay::Hostname : public ydk::Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: empty

}; // Native::Otv::Isis::Overlay::Hostname


class Native::Otv::Isis::Overlay::LogAdjacencyChanges : public ydk::Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Otv::Isis::Overlay::LogAdjacencyChanges


class Native::Otv::Isis::Overlay::LspGenInterval : public ydk::Entity
{
    public:
        LspGenInterval();
        ~LspGenInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::LspGenInterval


class Native::Otv::Isis::Overlay::Nsf : public ydk::Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cisco; //type: empty
        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Nsf


class Native::Otv::Isis::Overlay::PrcInterval : public ydk::Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::PrcInterval


class Native::Otv::Isis::Overlay::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Skeptical


class Native::Otv::Isis::Overlay::SpfInterval : public ydk::Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seconds; //type: uint8
        ydk::YLeaf milliseconds; //type: uint32
        ydk::YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::SpfInterval


class Native::Otv::Isis::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf net; //type: string
        class Default_; //type: Native::Otv::Isis::Site::Default_
        class LogAdjacencyChanges; //type: Native::Otv::Isis::Site::LogAdjacencyChanges
        class Skeptical; //type: Native::Otv::Isis::Site::Skeptical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site


class Native::Otv::Isis::Site::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf log_adjacency_changes; //type: empty
        ydk::YLeaf net; //type: empty
        class Skeptical; //type: Native::Otv::Isis::Site::Default_::Skeptical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default_::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site::Default_


class Native::Otv::Isis::Site::Default_::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: empty

}; // Native::Otv::Isis::Site::Default_::Skeptical


class Native::Otv::Isis::Site::LogAdjacencyChanges : public ydk::Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all; //type: empty

}; // Native::Otv::Isis::Site::LogAdjacencyChanges


class Native::Otv::Isis::Site::Skeptical : public ydk::Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Site::Skeptical


class Native::Otv::Site : public ydk::Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bridge_domain; //type: uint16
        class Default_; //type: Native::Otv::Site::Default_
        class Otv_; //type: Native::Otv::Site::Otv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_> otv;
        
}; // Native::Otv::Site


class Native::Otv::Site::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Otv_; //type: Native::Otv::Site::Default_::Otv_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_> otv;
        
}; // Native::Otv::Site::Default_


class Native::Otv::Site::Default_::Otv_ : public ydk::Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Otv::Site::Default_::Otv_::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Default_::Otv_


class Native::Otv::Site::Default_::Otv_::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf hello_multiplier; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Default_::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Default_::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Default_::Otv_::Isis::HelloInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Default_::Otv_::Isis


class Native::Otv::Site::Default_::Otv_::Isis::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Default_::Otv_::Isis::Authentication


class Native::Otv::Site::Default_::Otv_::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Default_::Otv_::Isis::Hello


class Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Default_::Otv_::Isis::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Default_::Otv_::Isis::HelloInterval


class Native::Otv::Site::Otv_ : public ydk::Entity
{
    public:
        Otv_();
        ~Otv_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Isis; //type: Native::Otv::Site::Otv_::Isis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis> isis;
        
}; // Native::Otv::Site::Otv_


class Native::Otv::Site::Otv_::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf hello_multiplier; //type: uint16
        ydk::YLeaf priority; //type: uint8
        class Authentication; //type: Native::Otv::Site::Otv_::Isis::Authentication
        class Hello; //type: Native::Otv::Site::Otv_::Isis::Hello
        class HelloInterval; //type: Native::Otv::Site::Otv_::Isis::HelloInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::HelloInterval> hello_interval;
        
}; // Native::Otv::Site::Otv_::Isis


class Native::Otv::Site::Otv_::Isis::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_chain; //type: string
        ydk::YLeaf mode; //type: Mode
        ydk::YLeaf send_only; //type: empty
        class Mode;

}; // Native::Otv::Site::Otv_::Isis::Authentication


class Native::Otv::Site::Otv_::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Otv::Site::Otv_::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site::Otv_::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Otv::Site::Otv_::Isis::Hello


class Native::Otv::Site::Otv_::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Otv::Site::Otv_::Isis::Hello::Padding


class Native::Otv::Site::Otv_::Isis::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf minimal; //type: empty

}; // Native::Otv::Site::Otv_::Isis::HelloInterval


class Native::RemoteManagement : public ydk::Entity
{
    public:
        RemoteManagement();
        ~RemoteManagement();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dmi; //type: empty
        ydk::YLeaf restful_api; //type: boolean

}; // Native::RemoteManagement


class Native::VirtualService : public ydk::Entity
{
    public:
        VirtualService();
        ~VirtualService();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf profile; //type: string
        class Ip; //type: Native::VirtualService::Ip
        class Vnic; //type: Native::VirtualService::Vnic

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic> vnic;
        
}; // Native::VirtualService


class Native::VirtualService::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Shared; //type: Native::VirtualService::Ip::Shared

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared> shared;
        
}; // Native::VirtualService::Ip


class Native::VirtualService::Ip::Shared : public ydk::Entity
{
    public:
        Shared();
        ~Shared();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostInterface; //type: Native::VirtualService::Ip::Shared::HostInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Ip::Shared::HostInterface> host_interface;
        
}; // Native::VirtualService::Ip::Shared


class Native::VirtualService::Ip::Shared::HostInterface : public ydk::Entity
{
    public:
        HostInterface();
        ~HostInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf loopback; //type: uint64
        ydk::YLeaf vlan; //type: uint16

}; // Native::VirtualService::Ip::Shared::HostInterface


class Native::VirtualService::Vnic : public ydk::Entity
{
    public:
        Vnic();
        ~Vnic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gateway; //type: Native::VirtualService::Vnic::Gateway
        class Management; //type: Native::VirtualService::Vnic::Management

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway> gateway;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management> management;
        
}; // Native::VirtualService::Vnic


class Native::VirtualService::Vnic::Gateway : public ydk::Entity
{
    public:
        Gateway();
        ~Gateway();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Virtualportgroup; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup> > virtualportgroup;
        
}; // Native::VirtualService::Vnic::Gateway


class Native::VirtualService::Vnic::Gateway::Virtualportgroup : public ydk::Entity
{
    public:
        Virtualportgroup();
        ~Virtualportgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint16
        class Guest; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest> guest;
        
}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest : public ydk::Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ip


class Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Gateway::Virtualportgroup::Guest::Ipv6


class Native::VirtualService::Vnic::Management : public ydk::Entity
{
    public:
        Management();
        ~Management();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gigabitethernet0; //type: empty
        class Guest; //type: Native::VirtualService::Vnic::Management::Guest

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest> guest;
        
}; // Native::VirtualService::Vnic::Management


class Native::VirtualService::Vnic::Management::Guest : public ydk::Entity
{
    public:
        Guest();
        ~Guest();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ip; //type: Native::VirtualService::Vnic::Management::Guest::Ip
        class Ipv6; //type: Native::VirtualService::Vnic::Management::Guest::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::VirtualService::Vnic::Management::Guest::Ipv6> ipv6;
        
}; // Native::VirtualService::Vnic::Management::Guest


class Native::VirtualService::Vnic::Management::Guest::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Management::Guest::Ip


class Native::VirtualService::Vnic::Management::Guest::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // Native::VirtualService::Vnic::Management::Guest::Ipv6


class Native::Snmp : public ydk::Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ifmib; //type: Native::Snmp::Ifmib
        class Mib; //type: Native::Snmp::Mib

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib> ifmib;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib> mib;
        
}; // Native::Snmp


class Native::Snmp::Ifmib : public ydk::Entity
{
    public:
        Ifmib();
        ~Ifmib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ifindex; //type: Native::Snmp::Ifmib::Ifindex
        class Ifalias; //type: Native::Snmp::Ifmib::Ifalias

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifalias> ifalias;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Ifmib::Ifindex> ifindex;
        
}; // Native::Snmp::Ifmib


class Native::Snmp::Ifmib::Ifindex : public ydk::Entity
{
    public:
        Ifindex();
        ~Ifindex();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf persist; //type: empty

}; // Native::Snmp::Ifmib::Ifindex


class Native::Snmp::Ifmib::Ifalias : public ydk::Entity
{
    public:
        Ifalias();
        ~Ifalias();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf long_; //type: empty

}; // Native::Snmp::Ifmib::Ifalias


class Native::Snmp::Mib : public ydk::Entity
{
    public:
        Mib();
        ~Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommunityMap; //type: Native::Snmp::Mib::CommunityMap
        class Bulkstat; //type: Native::Snmp::Mib::Bulkstat
        class Persist; //type: Native::Snmp::Mib::Persist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat> bulkstat;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap> community_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Persist> persist; // presence node
        
}; // Native::Snmp::Mib


class Native::Snmp::Mib::CommunityMap : public ydk::Entity
{
    public:
        CommunityMap();
        ~CommunityMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CommunityMapList; //type: Native::Snmp::Mib::CommunityMap::CommunityMapList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::CommunityMap::CommunityMapList> > community_map_list;
        
}; // Native::Snmp::Mib::CommunityMap


class Native::Snmp::Mib::CommunityMap::CommunityMapList : public ydk::Entity
{
    public:
        CommunityMapList();
        ~CommunityMapList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf engineid; //type: string

}; // Native::Snmp::Mib::CommunityMap::CommunityMapList


class Native::Snmp::Mib::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjectList; //type: Native::Snmp::Mib::Bulkstat::ObjectList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Snmp::Mib::Bulkstat::ObjectList> > object_list;
        
}; // Native::Snmp::Mib::Bulkstat


class Native::Snmp::Mib::Bulkstat::ObjectList : public ydk::Entity
{
    public:
        ObjectList();
        ~ObjectList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Snmp::Mib::Bulkstat::ObjectList


class Native::Snmp::Mib::Persist : public ydk::Entity
{
    public:
        Persist();
        ~Persist();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf persist_enum; //type: PersistEnum
        class PersistEnum;

}; // Native::Snmp::Mib::Persist


class Native::SnmpServer : public ydk::Entity
{
    public:
        SnmpServer();
        ~SnmpServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chassis_id; //type: string
        ydk::YLeaf contact; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeaf packetsize; //type: uint32
        ydk::YLeaf queue_length; //type: uint16
        ydk::YLeaf system_shutdown; //type: empty
        ydk::YLeaf tftp_server_list; //type: one of string, uint8
        class Community; //type: Native::SnmpServer::Community
        class Context; //type: Native::SnmpServer::Context
        class Enable; //type: Native::SnmpServer::Enable
        class Engineid; //type: Native::SnmpServer::Engineid
        class Group; //type: Native::SnmpServer::Group
        class Host; //type: Native::SnmpServer::Host
        class Ip; //type: Native::SnmpServer::Ip
        class Ifindex; //type: Native::SnmpServer::Ifindex
        class Manager; //type: Native::SnmpServer::Manager
        class SourceInterface; //type: Native::SnmpServer::SourceInterface
        class Trap; //type: Native::SnmpServer::Trap
        class TrapSource; //type: Native::SnmpServer::TrapSource
        class User; //type: Native::SnmpServer::User
        class View; //type: Native::SnmpServer::View

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Context> > context;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Engineid> engineid;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Group> > group;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Host> > host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Ifindex> ifindex;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Manager> manager; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::SourceInterface> source_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Trap> trap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::TrapSource> trap_source;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::User> user;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::View> > view;
        
}; // Native::SnmpServer


class Native::SnmpServer::Community : public ydk::Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf view; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf access_list_name; //type: one of string, uint16

}; // Native::SnmpServer::Community


class Native::SnmpServer::Context : public ydk::Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::SnmpServer::Context


class Native::SnmpServer::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EnableChoice; //type: Native::SnmpServer::Enable::EnableChoice

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice> enable_choice;
        
}; // Native::SnmpServer::Enable


class Native::SnmpServer::Enable::EnableChoice : public ydk::Entity
{
    public:
        EnableChoice();
        ~EnableChoice();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf informs; //type: empty
        class Traps; //type: Native::SnmpServer::Enable::EnableChoice::Traps

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps> traps; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice


class Native::SnmpServer::Enable::EnableChoice::Traps : public ydk::Entity
{
    public:
        Traps();
        ~Traps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aaa_server; //type: empty
        ydk::YLeaf local_auth; //type: empty
        ydk::YLeaf authenticate_fail; //type: empty
        ydk::YLeaf bfd; //type: empty
        ydk::YLeaf bgp; //type: empty
        ydk::YLeaf bstun; //type: empty
        ydk::YLeaf c2900; //type: empty
        ydk::YLeaf casa; //type: empty
        ydk::YLeaf ccme; //type: empty
        ydk::YLeaf cluster; //type: empty
        ydk::YLeaf channel; //type: empty
        ydk::YLeaf chassis; //type: empty
        ydk::YLeaf cnpd; //type: empty
        ydk::YLeaf config; //type: empty
        ydk::YLeaf copy_config; //type: empty
        ydk::YLeaf config_copy; //type: empty
        ydk::YLeaf config_ctid; //type: empty
        ydk::YLeaf cpu_threshold; //type: empty
        ydk::YLeaf dial; //type: empty
        ydk::YLeaf director; //type: empty
        ydk::YLeaf dlsw; //type: empty
        ydk::YLeaf deauthenticate; //type: empty
        ydk::YLeaf disassociate; //type: empty
        ydk::YLeaf dnis; //type: empty
        ydk::YLeaf dot11_qos; //type: empty
        ydk::YLeaf ds0_busyout; //type: empty
        ydk::YLeaf ds1; //type: empty
        ydk::YLeaf ds1_loopback; //type: empty
        ydk::YLeaf ds3; //type: empty
        ydk::YLeaf eigrp; //type: empty
        ydk::YLeaf entity_; //type: empty
        ydk::YLeaf ether_oam; //type: empty
        ydk::YLeaf event_manager; //type: empty
        ydk::YLeaf flowmon; //type: empty
        ydk::YLeaf fru_ctrl; //type: empty
        ydk::YLeaf gatekeeper; //type: empty
        ydk::YLeaf hsrp; //type: empty
        ydk::YLeaf icsudsu; //type: empty
        ydk::YLeaf ima; //type: empty
        ydk::YLeaf ipmobile; //type: empty
        ydk::YLeaf ipmulticast; //type: empty
        ydk::YLeaf ipsla; //type: empty
        ydk::YLeaf isis; //type: empty
        ydk::YLeaf module; //type: empty
        ydk::YLeaf msdp; //type: empty
        ydk::YLeaf mvpn; //type: empty
        ydk::YLeaf pppoe; //type: empty
        ydk::YLeaf rep; //type: empty
        ydk::YLeaf resource_policy; //type: empty
        ydk::YLeaf rf; //type: empty
        ydk::YLeaf rogue_ap; //type: empty
        ydk::YLeaf rsvp; //type: empty
        ydk::YLeaf rtr; //type: empty
        ydk::YLeaf sonet; //type: empty
        ydk::YLeaf srst; //type: empty
        ydk::YLeaf srp; //type: empty
        ydk::YLeaf stun; //type: empty
        ydk::YLeaf switch_over; //type: empty
        ydk::YLeaf syslog; //type: empty
        ydk::YLeaf tty; //type: empty
        ydk::YLeaf vlancreate; //type: empty
        ydk::YLeaf vlandelete; //type: empty
        ydk::YLeaf vlan_mac_limit; //type: empty
        ydk::YLeaf vlan_membership; //type: empty
        ydk::YLeaf voice; //type: empty
        ydk::YLeaf vrrp; //type: empty
        ydk::YLeaf vsimaster; //type: empty
        ydk::YLeaf vtp; //type: empty
        ydk::YLeaf wlan_wep; //type: empty
        ydk::YLeaf xgcp; //type: empty
        class TrustsecSxp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp
        class Vswitch; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch
        class TrustsecServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer
        class Trustsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec
        class TrustsecInterface; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface
        class TrustsecPolicy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy
        class Ospfv3; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3
        class Ike; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike
        class Alarms; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Alarms
        class Atm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm
        class AuthFramework; //type: Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework
        class BgpConf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf
        class Bridge; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bridge
        class Bulkstat; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat
        class CallHome; //type: Native::SnmpServer::Enable::EnableChoice::Traps::CallHome
        class C6Kxbar; //type: Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar
        class Cef; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cef
        class Cpu; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Cpu
        class Csg; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Csg
        class Dot1X; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X
        class Dsp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Dsp
        class Energywise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Energywise
        class EntityDiag; //type: Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag
        class Envmon; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Envmon
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable
        class Ethernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet
        class Firewall; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Firewall
        class Flash; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Flash
        class FlexLinks; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks
        class FrameRelay; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay
        class Ipsec; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec
        class Isakmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp
        class Isdn; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isdn
        class L2Tc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc
        class L2Tun; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun
        class License; //type: Native::SnmpServer::Enable::EnableChoice::Traps::License
        class MacNotification; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification
        class MacNotification2; //type: Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2
        class Memory; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Memory
        class Mpls; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls
        class Nhrp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp
        class Ospf; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf
        class Pim; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pim
        class Plogd; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Plogd
        class PortSecurity; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity
        class PowerEthernet; //type: Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet
        class Pw; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Pw
        class Slb; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Slb
        class Snmp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Snmp
        class Stackwise; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise
        class Stpx; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Stpx
        class Transceiver; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver
        class Udld; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Udld
        class Vrfmib; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib
        class Vstack; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vstack
        class Wireless; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Wireless

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Alarms> alarms; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework> auth_framework; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf> bgp_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bridge> bridge; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat> bulkstat; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar> c6kxbar; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::CallHome> call_home; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cef> cef;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Cpu> cpu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Csg> csg; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Dsp> dsp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag> entity_diag; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Envmon> envmon; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable> errdisable; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Firewall> firewall; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Flash> flash; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks> flex_links; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike> ike;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec> ipsec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp> isakmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isdn> isdn; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc> l2tc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun> l2tun;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::License> license; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification> mac_notification; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2> mac_notification2; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Memory> memory; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls> mpls; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp> nhrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pim> pim; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Plogd> plogd; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet> power_ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Pw> pw; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Slb> slb; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise> stackwise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Stpx> stpx; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver> transceiver;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec> trustsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface> trustsec_interface; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy> trustsec_policy; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer> trustsec_server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp> trustsec_sxp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Udld> udld; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib> vrfmib;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vstack> vstack; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch> vswitch; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Wireless> wireless; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp : public ydk::Entity
{
    public:
        TrustsecSxp();
        ~TrustsecSxp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf binding_conflict; //type: empty
        ydk::YLeaf binding_err; //type: empty
        ydk::YLeaf binding_expn_fail; //type: empty
        ydk::YLeaf conn_config_err; //type: empty
        ydk::YLeaf conn_down; //type: empty
        ydk::YLeaf conn_srcaddr_err; //type: empty
        ydk::YLeaf conn_up; //type: empty
        ydk::YLeaf msg_parse_err; //type: empty
        ydk::YLeaf oper_nodeid_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch : public ydk::Entity
{
    public:
        Vswitch();
        ~Vswitch();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DualActive; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive> dual_active; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch


class Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive : public ydk::Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vsl; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer : public ydk::Entity
{
    public:
        TrustsecServer();
        ~TrustsecServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RadiusServer; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer> radius_server; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer : public ydk::Entity
{
    public:
        RadiusServer();
        ~RadiusServer();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf provision_secret; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec : public ydk::Entity
{
    public:
        Trustsec();
        ~Trustsec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthzFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError> authz_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError : public ydk::Entity
{
    public:
        AuthzFileError();
        ~AuthzFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CacheFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError> cache_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError : public ydk::Entity
{
    public:
        CacheFileError();
        ~CacheFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeystoreFileError; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError> keystore_file_error; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError : public ydk::Entity
{
    public:
        KeystoreFileError();
        ~KeystoreFileError();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class KeystoreSyncFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail> keystore_sync_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail : public ydk::Entity
{
    public:
        KeystoreSyncFail();
        ~KeystoreSyncFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RandomNumberFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail> random_number_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail


class Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail : public ydk::Entity
{
    public:
        RandomNumberFail();
        ~RandomNumberFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_entropy_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface : public ydk::Entity
{
    public:
        TrustsecInterface();
        ~TrustsecInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unauthorized; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized> unauthorized; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized : public ydk::Entity
{
    public:
        Unauthorized();
        ~Unauthorized();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SapFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail> sap_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail : public ydk::Entity
{
    public:
        SapFail();
        ~SapFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuthcFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail> authc_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail : public ydk::Entity
{
    public:
        AuthcFail();
        ~AuthcFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SupplicantFail; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail> supplicant_fail; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail : public ydk::Entity
{
    public:
        SupplicantFail();
        ~SupplicantFail();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authz_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy : public ydk::Entity
{
    public:
        TrustsecPolicy();
        ~TrustsecPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerPolicyUpdated; //type: Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated> peer_policy_updated; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy


class Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated : public ydk::Entity
{
    public:
        PeerPolicyUpdated();
        ~PeerPolicyUpdated();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf authz_sgacl_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3 : public ydk::Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state_change; //type: empty
        ydk::YLeaf errors; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike : public ydk::Entity
{
    public:
        Ike();
        ~Ike();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ike::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms : public ydk::Entity
{
    public:
        Alarms();
        ~Alarms();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarm_type; //type: one of enumeration, uint8
        class AlarmType;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Alarms


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pvc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc> pvc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf fail_interval; //type: uint16
        class Extension; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension> extension;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension : public ydk::Entity
{
    public:
        Extension();
        ~Extension();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf down; //type: empty
        ydk::YLeaf up; //type: empty
        ydk::YLeaf mibversion; //type: Mibversion
        class Oam; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam> oam;
                class Mibversion;

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam : public ydk::Entity
{
    public:
        Oam();
        ~Oam();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Failure; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure> failure;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure : public ydk::Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf loopback; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Oam::Failure


class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint16
        ydk::YLeaf count; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework : public ydk::Entity
{
    public:
        AuthFramework();
        ~AuthFramework();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sec_violation; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::AuthFramework


class Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf : public ydk::Entity
{
    public:
        BgpConf();
        ~BgpConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cbgp2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::BgpConf


class Native::SnmpServer::Enable::EnableChoice::Traps::Bridge : public ydk::Entity
{
    public:
        Bridge();
        ~Bridge();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf newroot; //type: empty
        ydk::YLeaf topologychange; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bridge


class Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat : public ydk::Entity
{
    public:
        Bulkstat();
        ~Bulkstat();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf collection; //type: empty
        ydk::YLeaf transfer; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Bulkstat


class Native::SnmpServer::Enable::EnableChoice::Traps::CallHome : public ydk::Entity
{
    public:
        CallHome();
        ~CallHome();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf message_send_fail; //type: empty
        ydk::YLeaf server_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::CallHome


class Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar : public ydk::Entity
{
    public:
        C6Kxbar();
        ~C6Kxbar();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intbus_crcexcd; //type: empty
        ydk::YLeaf intbus_crcrcvrd; //type: empty
        ydk::YLeaf swbus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::C6Kxbar


class Native::SnmpServer::Enable::EnableChoice::Traps::Cef : public ydk::Entity
{
    public:
        Cef();
        ~Cef();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf resource_failure; //type: empty
        ydk::YLeaf peer_state_change; //type: empty
        ydk::YLeaf peer_fib_state_change; //type: empty
        ydk::YLeaf inconsistency; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cef


class Native::SnmpServer::Enable::EnableChoice::Traps::Cpu : public ydk::Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Cpu


class Native::SnmpServer::Enable::EnableChoice::Traps::Csg : public ydk::Entity
{
    public:
        Csg();
        ~Csg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf agent; //type: empty
        ydk::YLeaf database; //type: empty
        ydk::YLeaf quota_server; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Csg


class Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X : public ydk::Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf auth_fail_vlan; //type: empty
        ydk::YLeaf guest_vlan; //type: empty
        ydk::YLeaf no_auth_fail_vlan; //type: empty
        ydk::YLeaf no_guest_vlan; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dot1X


class Native::SnmpServer::Enable::EnableChoice::Traps::Dsp : public ydk::Entity
{
    public:
        Dsp();
        ~Dsp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf card_status; //type: empty
        ydk::YLeaf oper_state; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Dsp


class Native::SnmpServer::Enable::EnableChoice::Traps::Energywise : public ydk::Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_occured; //type: empty
        ydk::YLeaf level_change; //type: empty
        ydk::YLeaf neighbor_added; //type: empty
        ydk::YLeaf neighbor_deleted; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Energywise


class Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag : public ydk::Entity
{
    public:
        EntityDiag();
        ~EntityDiag();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf boot_up_fail; //type: empty
        ydk::YLeaf hm_test_recover; //type: empty
        ydk::YLeaf hm_thresh_reached; //type: empty
        ydk::YLeaf scheduled_test_fail; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::EntityDiag


class Native::SnmpServer::Enable::EnableChoice::Traps::Envmon : public ydk::Entity
{
    public:
        Envmon();
        ~Envmon();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fan; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf supply; //type: empty
        ydk::YLeaf temperature; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Envmon


class Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cfm; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm
        class Evc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm> cfm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc> evc; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarm; //type: empty
        class Cc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc
        class Crosscheck; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc> cc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck> crosscheck; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc : public ydk::Entity
{
    public:
        Cc();
        ~Cc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config; //type: empty
        ydk::YLeaf cross_connect; //type: empty
        ydk::YLeaf loop; //type: empty
        ydk::YLeaf mep_down; //type: empty
        ydk::YLeaf mep_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Cc


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck : public ydk::Entity
{
    public:
        Crosscheck();
        ~Crosscheck();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mep_missing; //type: empty
        ydk::YLeaf mep_unknown; //type: empty
        ydk::YLeaf service_up; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Cfm::Crosscheck


class Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc : public ydk::Entity
{
    public:
        Evc();
        ~Evc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ethernet::Evc


class Native::SnmpServer::Enable::EnableChoice::Traps::Firewall : public ydk::Entity
{
    public:
        Firewall();
        ~Firewall();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf serverstatus; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Firewall


class Native::SnmpServer::Enable::EnableChoice::Traps::Flash : public ydk::Entity
{
    public:
        Flash();
        ~Flash();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf insertion; //type: empty
        ydk::YLeaf removal; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Flash


class Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks : public ydk::Entity
{
    public:
        FlexLinks();
        ~FlexLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FlexLinks


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Multilink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink
        class Subif; //type: Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink> multilink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif> subif; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink : public ydk::Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_mismatch; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Multilink


class Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif : public ydk::Entity
{
    public:
        Subif();
        ~Subif();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::FrameRelay::Subif


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec : public ydk::Entity
{
    public:
        Ipsec();
        ~Ipsec();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf too_many_sas; //type: empty
        class Cryptomap; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap> cryptomap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap : public ydk::Entity
{
    public:
        Cryptomap();
        ~Cryptomap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf attach; //type: empty
        ydk::YLeaf delete_; //type: empty
        ydk::YLeaf detach; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Cryptomap


class Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ipsec::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp : public ydk::Entity
{
    public:
        Isakmp();
        ~Isakmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy
        class Tunnel; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel> tunnel;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf add; //type: empty
        ydk::YLeaf delete_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Policy


class Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: empty
        ydk::YLeaf stop; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isakmp::Tunnel


class Native::SnmpServer::Enable::EnableChoice::Traps::Isdn : public ydk::Entity
{
    public:
        Isdn();
        ~Isdn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf call_information; //type: empty
        ydk::YLeaf chan_not_avail; //type: empty
        ydk::YLeaf ietf; //type: empty
        ydk::YLeaf layer2; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Isdn


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc : public ydk::Entity
{
    public:
        L2Tc();
        ~L2Tc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sys_threshold; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tc


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun : public ydk::Entity
{
    public:
        L2Tun();
        ~L2Tun();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session; //type: empty
        class Pseudowire; //type: Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire> pseudowire;
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun


class Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf status; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::L2Tun::Pseudowire


class Native::SnmpServer::Enable::EnableChoice::Traps::License : public ydk::Entity
{
    public:
        License();
        ~License();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deploy; //type: empty
        ydk::YLeaf error; //type: empty
        ydk::YLeaf usage; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::License


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification : public ydk::Entity
{
    public:
        MacNotification();
        ~MacNotification();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification


class Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2 : public ydk::Entity
{
    public:
        MacNotification2();
        ~MacNotification2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf change; //type: empty
        ydk::YLeaf move; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::MacNotification2


class Native::SnmpServer::Enable::EnableChoice::Traps::Memory : public ydk::Entity
{
    public:
        Memory();
        ~Memory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bufferpeak; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Memory


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpn; //type: empty
        class TrafficEng; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng
        class FastReroute; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute
        class Rfc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc
        class Ldp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute> fast_reroute; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp> ldp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc> rfc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng> traffic_eng; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf up; //type: empty
        ydk::YLeaf down; //type: empty
        ydk::YLeaf reroute; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute : public ydk::Entity
{
    public:
        FastReroute();
        ~FastReroute();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protected_; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::FastReroute


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc : public ydk::Entity
{
    public:
        Rfc();
        ~Rfc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldp; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Rfc


class Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pv_limit; //type: empty
        ydk::YLeaf session_down; //type: empty
        ydk::YLeaf session_up; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::Ldp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp : public ydk::Entity
{
    public:
        Nhrp();
        ~Nhrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nhs; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs
        class Nhc; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc
        class Nhp; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp
        class QuotaExceeded; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc> nhc; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp> nhp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs> nhs; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded> quota_exceeded; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs : public ydk::Entity
{
    public:
        Nhs();
        ~Nhs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc : public ydk::Entity
{
    public:
        Nhc();
        ~Nhc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp : public ydk::Entity
{
    public:
        Nhp();
        ~Nhp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp


class Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded : public ydk::Entity
{
    public:
        QuotaExceeded();
        ~QuotaExceeded();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa
        class CiscoSpecific; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific> cisco_specific; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors> errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa> lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf if_state_change; //type: empty
        ydk::YLeaf neighbor_state_change; //type: empty
        ydk::YLeaf virtif_state_change; //type: empty
        ydk::YLeaf virtneighbor_state_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets; //type: empty
        ydk::YLeaf virt_packets; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific : public ydk::Entity
{
    public:
        CiscoSpecific();
        ~CiscoSpecific();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StateChange; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange
        class Errors; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors
        class Errdisable; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable
        class Retransmit; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit
        class Lsa; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable> errdisable; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors> errors; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa> lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit> retransmit; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange> state_change; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange : public ydk::Entity
{
    public:
        StateChange();
        ~StateChange();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nssa_trans_change; //type: empty
        class Shamlink; //type: Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink

        std::shared_ptr<Cisco_IOS_XE_native::Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink> shamlink; // presence node
        
}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink : public ydk::Entity
{
    public:
        Shamlink();
        ~Shamlink();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: empty
        ydk::YLeaf interface_old; //type: empty
        ydk::YLeaf neighbor; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors : public ydk::Entity
{
    public:
        Errors();
        ~Errors();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable : public ydk::Entity
{
    public:
        Errdisable();
        ~Errdisable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf notification_rate; //type: uint16

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit


class Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa : public ydk::Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsa_maxage; //type: empty
        ydk::YLeaf lsa_originate; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa


class Native::SnmpServer::Enable::EnableChoice::Traps::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalid_pim_message; //type: empty
        ydk::YLeaf neighbor_change; //type: empty
        ydk::YLeaf rp_mapping_change; //type: empty

}; // Native::SnmpServer::Enable::EnableChoice::Traps::Pim

class Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Otv::Site::Otv_::Isis::Authentication::Mode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf text;

};

class Native::Snmp::Mib::Persist::PersistEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cbqos;
        static const ydk::Enum::YLeaf circuit;
        static const ydk::Enum::YLeaf v3mibs;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Alarms::AlarmType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf informational;
        static const ydk::Enum::YLeaf major;
        static const ydk::Enum::YLeaf minor;

};

class Native::SnmpServer::Enable::EnableChoice::Traps::Atm::Pvc::Extension::Mibversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_168_ */

