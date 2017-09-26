
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_86.hpp"
#include "Cisco_IOS_XE_native_87.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Otv::Site::Default_::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::HelloInterval()
    :
    minimal{YType::empty, "minimal"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_data() const
{
    return minimal.is_set
	|| value_.is_set;
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimal.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Default_::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Otv_()
    :
    isis(std::make_shared<Native::Otv::Site::Otv_::Isis>())
{
    isis->parent = this;

    yang_name = "otv"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::~Otv_()
{
}

bool Native::Otv::Site::Otv_::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Otv::Site::Otv_::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Otv::Site::Otv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Otv::Site::Otv_::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Otv::Site::Otv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Isis()
    :
    bfd{YType::empty, "bfd"},
    hello_multiplier{YType::uint16, "hello-multiplier"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>())
	,hello(std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>())
	,hello_interval(std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>())
{
    authentication->parent = this;
    hello->parent = this;
    hello_interval->parent = this;

    yang_name = "isis"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::Isis::~Isis()
{
}

bool Native::Otv::Site::Otv_::Isis::has_data() const
{
    return bfd.is_set
	|| hello_multiplier.is_set
	|| priority.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data());
}

bool Native::Otv::Site::Otv_::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Otv::Site::Otv_::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Otv::Site::Otv_::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    return children;
}

void Native::Otv::Site::Otv_::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "hello" || name == "hello-interval" || name == "bfd" || name == "hello-multiplier" || name == "priority")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    mode{YType::enumeration, "mode"},
    send_only{YType::empty, "send-only"}
{

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::Isis::Authentication::~Authentication()
{
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_data() const
{
    return key_chain.is_set
	|| mode.is_set
	|| send_only.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::Isis::Hello::~Hello()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Otv::Site::Otv_::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Otv::Site::Otv_::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Otv::Site::Otv_::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Otv::Site::Otv_::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::Isis::Hello::Padding::~Padding()
{
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Otv::Site::Otv_::Isis::HelloInterval::HelloInterval()
    :
    minimal{YType::empty, "minimal"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Otv::Site::Otv_::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_data() const
{
    return minimal.is_set
	|| value_.is_set;
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimal.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Otv::Site::Otv_::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Otv::Site::Otv_::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimal.is_set || is_set(minimal.yfilter)) leaf_name_data.push_back(minimal.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Otv::Site::Otv_::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Otv::Site::Otv_::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimal")
    {
        minimal = value;
        minimal.value_namespace = name_space;
        minimal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Otv::Site::Otv_::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimal")
    {
        minimal.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Otv::Site::Otv_::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimal" || name == "value")
        return true;
    return false;
}

Native::ParameterMap::ParameterMap()
    :
    name{YType::str, "name"},
    alert{YType::enumeration, "Cisco-IOS-XE-policy:alert"},
    application_inspect{YType::enumeration, "Cisco-IOS-XE-policy:application-inspect"},
    audit_trail{YType::enumeration, "Cisco-IOS-XE-policy:audit-trail"},
    dns_timeout{YType::uint32, "Cisco-IOS-XE-policy:dns-timeout"},
    max_destination{YType::uint32, "Cisco-IOS-XE-policy:max-destination"},
    parameter_map_type{YType::enumeration, "parameter-map-type"},
    type{YType::enumeration, "type"},
    zone_mismatch{YType::enumeration, "Cisco-IOS-XE-policy:zone-mismatch"}
    	,
    aggressive_aging(std::make_shared<Native::ParameterMap::AggressiveAging>())
	,global(std::make_shared<Native::ParameterMap::Global>())
	,icmp(std::make_shared<Native::ParameterMap::Icmp>())
	,lisp(std::make_shared<Native::ParameterMap::Lisp>())
	,log(std::make_shared<Native::ParameterMap::Log>())
	,max_incomplete(std::make_shared<Native::ParameterMap::MaxIncomplete>())
	,one_minute(std::make_shared<Native::ParameterMap::OneMinute>())
	,sessions(std::make_shared<Native::ParameterMap::Sessions>())
	,tcp_inspect(std::make_shared<Native::ParameterMap::TcpInspect>())
	,tcp_inspect_zone(std::make_shared<Native::ParameterMap::TcpInspectZone>())
	,threat_detection(std::make_shared<Native::ParameterMap::ThreatDetection>())
	,timeout(std::make_shared<Native::ParameterMap::Timeout>())
	,udp(std::make_shared<Native::ParameterMap::Udp>())
	,vrf(std::make_shared<Native::ParameterMap::Vrf>())
	,watch_list(std::make_shared<Native::ParameterMap::WatchList>())
{
    aggressive_aging->parent = this;
    global->parent = this;
    icmp->parent = this;
    lisp->parent = this;
    log->parent = this;
    max_incomplete->parent = this;
    one_minute->parent = this;
    sessions->parent = this;
    tcp_inspect->parent = this;
    tcp_inspect_zone->parent = this;
    threat_detection->parent = this;
    timeout->parent = this;
    udp->parent = this;
    vrf->parent = this;
    watch_list->parent = this;

    yang_name = "parameter-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ParameterMap::~ParameterMap()
{
}

bool Native::ParameterMap::has_data() const
{
    return name.is_set
	|| alert.is_set
	|| application_inspect.is_set
	|| audit_trail.is_set
	|| dns_timeout.is_set
	|| max_destination.is_set
	|| parameter_map_type.is_set
	|| type.is_set
	|| zone_mismatch.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (one_minute !=  nullptr && one_minute->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_data())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data());
}

bool Native::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| ydk::is_set(application_inspect.yfilter)
	|| ydk::is_set(audit_trail.yfilter)
	|| ydk::is_set(dns_timeout.yfilter)
	|| ydk::is_set(max_destination.yfilter)
	|| ydk::is_set(parameter_map_type.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(zone_mismatch.yfilter)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (one_minute !=  nullptr && one_minute->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_operation())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation());
}

std::string Native::ParameterMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());
    if (application_inspect.is_set || is_set(application_inspect.yfilter)) leaf_name_data.push_back(application_inspect.get_name_leafdata());
    if (audit_trail.is_set || is_set(audit_trail.yfilter)) leaf_name_data.push_back(audit_trail.get_name_leafdata());
    if (dns_timeout.is_set || is_set(dns_timeout.yfilter)) leaf_name_data.push_back(dns_timeout.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.yfilter)) leaf_name_data.push_back(max_destination.get_name_leafdata());
    if (parameter_map_type.is_set || is_set(parameter_map_type.yfilter)) leaf_name_data.push_back(parameter_map_type.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (zone_mismatch.is_set || is_set(zone_mismatch.yfilter)) leaf_name_data.push_back(zone_mismatch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Global>();
        }
        return global;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ParameterMap::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "one-minute")
    {
        if(one_minute == nullptr)
        {
            one_minute = std::make_shared<Native::ParameterMap::OneMinute>();
        }
        return one_minute;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Native::ParameterMap::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "tcp-inspect")
    {
        if(tcp_inspect == nullptr)
        {
            tcp_inspect = std::make_shared<Native::ParameterMap::TcpInspect>();
        }
        return tcp_inspect;
    }

    if(child_yang_name == "tcp-inspect-zone")
    {
        if(tcp_inspect_zone == nullptr)
        {
            tcp_inspect_zone = std::make_shared<Native::ParameterMap::TcpInspectZone>();
        }
        return tcp_inspect_zone;
    }

    if(child_yang_name == "threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::ThreatDetection>();
        }
        return threat_detection;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ParameterMap::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::ParameterMap::WatchList>();
        }
        return watch_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_aging != nullptr)
    {
        children["aggressive-aging"] = aggressive_aging;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    if(one_minute != nullptr)
    {
        children["one-minute"] = one_minute;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(tcp_inspect != nullptr)
    {
        children["tcp-inspect"] = tcp_inspect;
    }

    if(tcp_inspect_zone != nullptr)
    {
        children["tcp-inspect-zone"] = tcp_inspect_zone;
    }

    if(threat_detection != nullptr)
    {
        children["threat-detection"] = threat_detection;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    return children;
}

void Native::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-inspect")
    {
        application_inspect = value;
        application_inspect.value_namespace = name_space;
        application_inspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "audit-trail")
    {
        audit_trail = value;
        audit_trail.value_namespace = name_space;
        audit_trail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout = value;
        dns_timeout.value_namespace = name_space;
        dns_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-destination")
    {
        max_destination = value;
        max_destination.value_namespace = name_space;
        max_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type = value;
        parameter_map_type.value_namespace = name_space;
        parameter_map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch = value;
        zone_mismatch.value_namespace = name_space;
        zone_mismatch.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
    if(value_path == "application-inspect")
    {
        application_inspect.yfilter = yfilter;
    }
    if(value_path == "audit-trail")
    {
        audit_trail.yfilter = yfilter;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout.yfilter = yfilter;
    }
    if(value_path == "max-destination")
    {
        max_destination.yfilter = yfilter;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch.yfilter = yfilter;
    }
}

bool Native::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggressive-aging" || name == "global" || name == "icmp" || name == "lisp" || name == "log" || name == "max-incomplete" || name == "one-minute" || name == "sessions" || name == "tcp-inspect" || name == "tcp-inspect-zone" || name == "threat-detection" || name == "timeout" || name == "udp" || name == "vrf" || name == "watch-list" || name == "name" || name == "alert" || name == "application-inspect" || name == "audit-trail" || name == "dns-timeout" || name == "max-destination" || name == "parameter-map-type" || name == "type" || name == "zone-mismatch")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::AggressiveAging()
    :
    high(std::make_shared<Native::ParameterMap::AggressiveAging::High>())
{
    high->parent = this;

    yang_name = "aggressive-aging"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::AggressiveAging::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::ParameterMap::AggressiveAging::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:aggressive-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::ParameterMap::AggressiveAging::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::High()
    :
    absolute(std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>())
	,percent(std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>())
{
    absolute->parent = this;
    percent->parent = this;

    yang_name = "high"; yang_parent_name = "aggressive-aging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::~High()
{
}

bool Native::ParameterMap::AggressiveAging::High::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Native::ParameterMap::AggressiveAging::High::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::AggressiveAging::High::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::AggressiveAging::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "percent")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Absolute::Absolute()
    :
    low{YType::uint64, "low"},
    value_{YType::uint64, "value"}
{

    yang_name = "absolute"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Absolute::~Absolute()
{
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_data() const
{
    return low.is_set
	|| value_.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low" || name == "value")
        return true;
    return false;
}

Native::ParameterMap::AggressiveAging::High::Percent::Percent()
    :
    low_percent{YType::uint8, "low_percent"},
    value_{YType::uint8, "value"}
{

    yang_name = "percent"; yang_parent_name = "high"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::AggressiveAging::High::Percent::~Percent()
{
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_data() const
{
    return low_percent.is_set
	|| value_.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_percent.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::ParameterMap::AggressiveAging::High::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::AggressiveAging::High::Percent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_percent.is_set || is_set(low_percent.yfilter)) leaf_name_data.push_back(low_percent.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low_percent")
    {
        low_percent = value;
        low_percent.value_namespace = name_space;
        low_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low_percent")
    {
        low_percent.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low_percent" || name == "value")
        return true;
    return false;
}

Native::ParameterMap::Global::Global()
    :
    fail_open{YType::empty, "fail-open"},
    logging{YType::empty, "logging"},
    redirect_list{YType::str, "redirect-list"}
    	,
    license(std::make_shared<Native::ParameterMap::Global::License>())
	,primary(nullptr) // presence node
	,secondary(nullptr) // presence node
	,whitelist(nullptr) // presence node
{
    license->parent = this;

    yang_name = "global"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::~Global()
{
}

bool Native::ParameterMap::Global::has_data() const
{
    return fail_open.is_set
	|| logging.is_set
	|| redirect_list.is_set
	|| (license !=  nullptr && license->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::ParameterMap::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fail_open.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| (license !=  nullptr && license->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::ParameterMap::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_open.is_set || is_set(fail_open.yfilter)) leaf_name_data.push_back(fail_open.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::ParameterMap::Global::License>();
        }
        return license;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::ParameterMap::Global::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::ParameterMap::Global::Secondary>();
        }
        return secondary;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::ParameterMap::Global::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::ParameterMap::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fail-open")
    {
        fail_open = value;
        fail_open.value_namespace = name_space;
        fail_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fail-open")
    {
        fail_open.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license" || name == "primary" || name == "secondary" || name == "whitelist" || name == "fail-open" || name == "logging" || name == "redirect-list")
        return true;
    return false;
}

Native::ParameterMap::Global::License::License()
    :
    encrypted(std::make_shared<Native::ParameterMap::Global::License::Encrypted>())
	,unencypted(std::make_shared<Native::ParameterMap::Global::License::Unencypted>())
{
    encrypted->parent = this;
    unencypted->parent = this;

    yang_name = "license"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::~License()
{
}

bool Native::ParameterMap::Global::License::has_data() const
{
    return (encrypted !=  nullptr && encrypted->has_data())
	|| (unencypted !=  nullptr && unencypted->has_data());
}

bool Native::ParameterMap::Global::License::has_operation() const
{
    return is_set(yfilter)
	|| (encrypted !=  nullptr && encrypted->has_operation())
	|| (unencypted !=  nullptr && unencypted->has_operation());
}

std::string Native::ParameterMap::Global::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Encrypted")
    {
        if(encrypted == nullptr)
        {
            encrypted = std::make_shared<Native::ParameterMap::Global::License::Encrypted>();
        }
        return encrypted;
    }

    if(child_yang_name == "Unencypted")
    {
        if(unencypted == nullptr)
        {
            unencypted = std::make_shared<Native::ParameterMap::Global::License::Unencypted>();
        }
        return unencypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encrypted != nullptr)
    {
        children["Encrypted"] = encrypted;
    }

    if(unencypted != nullptr)
    {
        children["Unencypted"] = unencypted;
    }

    return children;
}

void Native::ParameterMap::Global::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::License::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Encrypted" || name == "Unencypted")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Encrypted::Encrypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Encrypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Encrypted::~Encrypted()
{
}

bool Native::ParameterMap::Global::License::Encrypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::License::Unencypted::Unencypted()
    :
    hex_string{YType::str, "Hex-string"}
{

    yang_name = "Unencypted"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::License::Unencypted::~Unencypted()
{
}

bool Native::ParameterMap::Global::License::Unencypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Unencypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string Native::ParameterMap::Global::License::Unencypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Unencypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::License::Unencypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Unencypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Unencypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Unencypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::License::Unencypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::License::Unencypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Hex-string")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Primary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Primary::Tower>())
{
    tower->parent = this;

    yang_name = "primary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::~Primary()
{
}

bool Native::ParameterMap::Global::Primary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Primary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Primary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Primary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "primary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Primary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Primary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Primary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Primary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Primary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Primary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Primary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Primary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Secondary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Secondary::Tower>())
{
    tower->parent = this;

    yang_name = "secondary"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::~Secondary()
{
}

bool Native::ParameterMap::Global::Secondary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Secondary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tower")
        return true;
    return false;
}

Native::ParameterMap::Global::Secondary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{

    yang_name = "tower"; yang_parent_name = "secondary"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Secondary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Secondary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Secondary::Tower::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Secondary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Secondary::Tower::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Secondary::Tower::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Secondary::Tower::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Secondary::Tower::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Whitelist()
    :
    acl(std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>())
	,domain_name(std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>())
	,download(nullptr) // presence node
{
    acl->parent = this;
    domain_name->parent = this;

    yang_name = "whitelist"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::~Whitelist()
{
}

bool Native::ParameterMap::Global::Whitelist::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::ParameterMap::Global::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::ParameterMap::Global::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::ParameterMap::Global::Whitelist::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::ParameterMap::Global::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Global::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Global::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "domain-name" || name == "download")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Acl::Acl()
    :
    acl_number{YType::str, "acl-number"},
    name{YType::str, "name"}
{

    yang_name = "acl"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Acl::~Acl()
{
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_data() const
{
    return acl_number.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-number" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::DomainName::DomainName()
    :
    regex{YType::str, "regex"}
{

    yang_name = "domain-name"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::DomainName::~DomainName()
{
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_data() const
{
    return regex.is_set;
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::ParameterMap::Global::Whitelist::Download::Download()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "download"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Global::Whitelist::Download::~Download()
{
}

bool Native::ParameterMap::Global::Whitelist::Download::has_data() const
{
    return interval.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::ParameterMap::Global::Whitelist::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Global::Whitelist::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Global::Whitelist::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Global::Whitelist::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ParameterMap::Icmp::Icmp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "icmp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Icmp::~Icmp()
{
}

bool Native::ParameterMap::Icmp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{

    yang_name = "lisp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Lisp::has_data() const
{
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inner_packet_inspection.yfilter);
}

std::string Native::ParameterMap::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.yfilter)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
        inner_packet_inspection.value_namespace = name_space;
        inner_packet_inspection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner-packet-inspection")
        return true;
    return false;
}

Native::ParameterMap::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
    	,
    flow_export(std::make_shared<Native::ParameterMap::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::~Log()
{
}

bool Native::ParameterMap::Log::has_data() const
{
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped_packets.yfilter)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.yfilter)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_export != nullptr)
    {
        children["flow-export"] = flow_export;
    }

    return children;
}

void Native::ParameterMap::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
        dropped_packets.value_namespace = name_space;
        dropped_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-export" || name == "dropped-packets")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>())
	,v9(std::make_shared<Native::ParameterMap::Log::FlowExport::V9>())
{
    template_->parent = this;
    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Log::FlowExport::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Log::FlowExport::has_operation() const
{
    return is_set(yfilter)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        children["v9"] = v9;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template" || name == "v9")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::Template_::Template_()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{

    yang_name = "template"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::Template_::~Template_()
{
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_data() const
{
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout_rate.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.yfilter)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
        timeout_rate.value_namespace = name_space;
        timeout_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout-rate")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{

    yang_name = "destination"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(dst_port.yfilter);
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.yfilter)) leaf_name_data.push_back(dst_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
        dst_port.value_namespace = name_space;
        dst_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "dst-port")
    {
        dst_port.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "dst-port")
        return true;
    return false;
}

Native::ParameterMap::MaxIncomplete::MaxIncomplete()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "max-incomplete"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::MaxIncomplete::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::OneMinute::OneMinute()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "one-minute"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::OneMinute::~OneMinute()
{
}

bool Native::ParameterMap::OneMinute::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::OneMinute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string Native::ParameterMap::OneMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:one-minute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::OneMinute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::OneMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::OneMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::OneMinute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::OneMinute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool Native::ParameterMap::OneMinute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Sessions()
    :
    maximum{YType::uint32, "maximum"}
    	,
    queue(std::make_shared<Native::ParameterMap::Sessions::Queue>())
{
    queue->parent = this;

    yang_name = "sessions"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::~Sessions()
{
}

bool Native::ParameterMap::Sessions::has_data() const
{
    return maximum.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::ParameterMap::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::ParameterMap::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::ParameterMap::Sessions::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::ParameterMap::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "maximum")
        return true;
    return false;
}

Native::ParameterMap::Sessions::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Sessions::Queue::~Queue()
{
}

bool Native::ParameterMap::Sessions::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::ParameterMap::Sessions::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::ParameterMap::Sessions::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Sessions::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Sessions::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Sessions::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Sessions::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::TcpInspect()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspect::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::~TcpInspect()
{
}

bool Native::ParameterMap::TcpInspect::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspect::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspect::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::Tcp()
    :
    finwait_time{YType::uint32, "finwait-time"},
    idle_time{YType::uint32, "idle-time"},
    synwait_time{YType::uint32, "synwait-time"}
    	,
    max_incomplete(std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>())
{
    max_incomplete->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::has_data() const
{
    return finwait_time.is_set
	|| idle_time.is_set
	|| synwait_time.is_set
	|| (max_incomplete !=  nullptr && max_incomplete->has_data());
}

bool Native::ParameterMap::TcpInspect::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(finwait_time.yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(synwait_time.yfilter)
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation());
}

std::string Native::ParameterMap::TcpInspect::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (finwait_time.is_set || is_set(finwait_time.yfilter)) leaf_name_data.push_back(finwait_time.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.yfilter)) leaf_name_data.push_back(synwait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>();
        }
        return max_incomplete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "finwait-time")
    {
        finwait_time = value;
        finwait_time.value_namespace = name_space;
        finwait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
        synwait_time.value_namespace = name_space;
        synwait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "finwait-time")
    {
        finwait_time.yfilter = yfilter;
    }
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "synwait-time")
    {
        synwait_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-incomplete" || name == "finwait-time" || name == "idle-time" || name == "synwait-time")
        return true;
    return false;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::MaxIncomplete()
    :
    host{YType::uint32, "host"}
{

    yang_name = "max-incomplete"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_data() const
{
    return host.is_set;
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::TcpInspectZone()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect-zone"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::~TcpInspectZone()
{
}

bool Native::ParameterMap::TcpInspectZone::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspectZone::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect-zone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect-zone"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_data() const
{
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syn_flood != nullptr)
    {
        children["syn-flood"] = syn_flood;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "syn-flood")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{

    yang_name = "rate"; yang_parent_name = "syn-flood"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_data() const
{
    return per_destination.is_set;
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_destination.yfilter);
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.yfilter)) leaf_name_data.push_back(per_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
        per_destination.value_namespace = name_space;
        per_destination.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-destination")
    {
        per_destination.yfilter = yfilter;
    }
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-destination")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::ThreatDetection()
    :
    basic_threat{YType::empty, "basic-threat"}
    	,
    rate(std::make_shared<Native::ParameterMap::ThreatDetection::Rate>())
{
    rate->parent = this;

    yang_name = "threat-detection"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::~ThreatDetection()
{
}

bool Native::ParameterMap::ThreatDetection::has_data() const
{
    return basic_threat.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::ThreatDetection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(basic_threat.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:threat-detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic_threat.is_set || is_set(basic_threat.yfilter)) leaf_name_data.push_back(basic_threat.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::ThreatDetection::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "basic-threat")
    {
        basic_threat = value;
        basic_threat.value_namespace = name_space;
        basic_threat.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "basic-threat")
    {
        basic_threat.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "basic-threat")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::Rate()
    :
    fw_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>())
	,inspect_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>())
	,syn_attack(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>())
{
    fw_drop->parent = this;
    inspect_drop->parent = this;
    syn_attack->parent = this;

    yang_name = "rate"; yang_parent_name = "threat-detection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::~Rate()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_data() const
{
    return (fw_drop !=  nullptr && fw_drop->has_data())
	|| (inspect_drop !=  nullptr && inspect_drop->has_data())
	|| (syn_attack !=  nullptr && syn_attack->has_data());
}

bool Native::ParameterMap::ThreatDetection::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (fw_drop !=  nullptr && fw_drop->has_operation())
	|| (inspect_drop !=  nullptr && inspect_drop->has_operation())
	|| (syn_attack !=  nullptr && syn_attack->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop")
    {
        if(fw_drop == nullptr)
        {
            fw_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>();
        }
        return fw_drop;
    }

    if(child_yang_name == "inspect-drop")
    {
        if(inspect_drop == nullptr)
        {
            inspect_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>();
        }
        return inspect_drop;
    }

    if(child_yang_name == "syn-attack")
    {
        if(syn_attack == nullptr)
        {
            syn_attack = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>();
        }
        return syn_attack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fw_drop != nullptr)
    {
        children["fw-drop"] = fw_drop;
    }

    if(inspect_drop != nullptr)
    {
        children["inspect-drop"] = inspect_drop;
    }

    if(syn_attack != nullptr)
    {
        children["syn-attack"] = syn_attack;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::ThreatDetection::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-drop" || name == "inspect-drop" || name == "syn-attack")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::FwDrop()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "fw-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::~FwDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-threshold" || name == "average-time-frame" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::InspectDrop()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "inspect-drop"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::~InspectDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-threshold" || name == "average-time-frame" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::SynAttack()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{

    yang_name = "syn-attack"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::~SynAttack()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_threshold.yfilter)
	|| ydk::is_set(average_time_frame.yfilter)
	|| ydk::is_set(burst_threshold.yfilter);
}

std::string Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-attack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.yfilter)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.yfilter)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.yfilter)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
        average_threshold.value_namespace = name_space;
        average_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
        average_time_frame.value_namespace = name_space;
        average_time_frame.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
        burst_threshold.value_namespace = name_space;
        burst_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-threshold")
    {
        average_threshold.yfilter = yfilter;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame.yfilter = yfilter;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold.yfilter = yfilter;
    }
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-threshold" || name == "average-time-frame" || name == "burst-threshold")
        return true;
    return false;
}

Native::ParameterMap::Timeout::Timeout()
    :
    fin_wait(std::make_shared<Native::ParameterMap::Timeout::FinWait>())
	,init_state(nullptr) // presence node
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Timeout::has_data() const
{
    return (fin_wait !=  nullptr && fin_wait->has_data())
	|| (init_state !=  nullptr && init_state->has_data());
}

bool Native::ParameterMap::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (fin_wait !=  nullptr && fin_wait->has_operation())
	|| (init_state !=  nullptr && init_state->has_operation());
}

std::string Native::ParameterMap::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Timeout::FinWait>();
        }
        return fin_wait;
    }

    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Timeout::InitState>();
        }
        return init_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fin_wait != nullptr)
    {
        children["fin-wait"] = fin_wait;
    }

    if(init_state != nullptr)
    {
        children["init-state"] = init_state;
    }

    return children;
}

void Native::ParameterMap::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ParameterMap::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ParameterMap::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fin-wait" || name == "init-state")
        return true;
    return false;
}

Native::ParameterMap::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{

    yang_name = "fin-wait"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Timeout::FinWait::has_data() const
{
    return msec.is_set;
}

bool Native::ParameterMap::Timeout::FinWait::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::ParameterMap::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::FinWait::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::FinWait::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::FinWait::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::FinWait::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::ParameterMap::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{

    yang_name = "init-state"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Timeout::InitState::has_data() const
{
    return sec.is_set;
}

bool Native::ParameterMap::Timeout::InitState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::ParameterMap::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Timeout::InitState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::InitState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Timeout::InitState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Timeout::InitState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sec")
        return true;
    return false;
}

Native::ParameterMap::Udp::Udp()
    :
    idle_time{YType::uint32, "idle-time"}
{

    yang_name = "udp"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Udp::~Udp()
{
}

bool Native::ParameterMap::Udp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter);
}

std::string Native::ParameterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time")
        return true;
    return false;
}

Native::ParameterMap::Vrf::Vrf()
    :
    inspect{YType::str, "inspect"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Vrf::has_data() const
{
    return inspect.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inspect.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ParameterMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.yfilter)) leaf_name_data.push_back(inspect.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inspect")
    {
        inspect = value;
        inspect.value_namespace = name_space;
        inspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inspect")
    {
        inspect.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ParameterMap::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspect" || name == "name")
        return true;
    return false;
}

Native::ParameterMap::WatchList::WatchList()
    :
    dynamic_expiry_timeout{YType::uint32, "dynamic-expiry-timeout"},
    enabled{YType::empty, "enabled"}
    	,
    add_item(std::make_shared<Native::ParameterMap::WatchList::AddItem>())
{
    add_item->parent = this;

    yang_name = "watch-list"; yang_parent_name = "parameter-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::~WatchList()
{
}

bool Native::ParameterMap::WatchList::has_data() const
{
    return dynamic_expiry_timeout.is_set
	|| enabled.is_set
	|| (add_item !=  nullptr && add_item->has_data());
}

bool Native::ParameterMap::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_expiry_timeout.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| (add_item !=  nullptr && add_item->has_operation());
}

std::string Native::ParameterMap::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_expiry_timeout.is_set || is_set(dynamic_expiry_timeout.yfilter)) leaf_name_data.push_back(dynamic_expiry_timeout.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-item")
    {
        if(add_item == nullptr)
        {
            add_item = std::make_shared<Native::ParameterMap::WatchList::AddItem>();
        }
        return add_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(add_item != nullptr)
    {
        children["add-item"] = add_item;
    }

    return children;
}

void Native::ParameterMap::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout = value;
        dynamic_expiry_timeout.value_namespace = name_space;
        dynamic_expiry_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-item" || name == "dynamic-expiry-timeout" || name == "enabled")
        return true;
    return false;
}

Native::ParameterMap::WatchList::AddItem::AddItem()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "add-item"; yang_parent_name = "watch-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ParameterMap::WatchList::AddItem::~AddItem()
{
}

bool Native::ParameterMap::WatchList::AddItem::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::WatchList::AddItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::ParameterMap::WatchList::AddItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ParameterMap::WatchList::AddItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::AddItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::AddItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::WatchList::AddItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ParameterMap::WatchList::AddItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::ParameterMap::WatchList::AddItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Parser::Parser()
    :
    config(std::make_shared<Native::Parser::Config>())
{
    config->parent = this;

    yang_name = "parser"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Parser::~Parser()
{
}

bool Native::Parser::has_data() const
{
    return (config !=  nullptr && config->has_data());
}

bool Native::Parser::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Native::Parser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Parser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Parser::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Parser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void Native::Parser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Native::Parser::Config::Config()
    :
    cache{YType::enumeration, "cache"},
    partition{YType::empty, "partition"}
{

    yang_name = "config"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Parser::Config::~Config()
{
}

bool Native::Parser::Config::has_data() const
{
    return cache.is_set
	|| partition.is_set;
}

bool Native::Parser::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(partition.yfilter);
}

std::string Native::Parser::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (partition.is_set || is_set(partition.yfilter)) leaf_name_data.push_back(partition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Parser::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Parser::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Parser::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partition")
    {
        partition = value;
        partition.value_namespace = name_space;
        partition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "partition")
    {
        partition.yfilter = yfilter;
    }
}

bool Native::Parser::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "partition")
        return true;
    return false;
}

Native::Password::Password()
    :
    encryption(std::make_shared<Native::Password::Encryption>())
{
    encryption->parent = this;

    yang_name = "password"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Password::~Password()
{
}

bool Native::Password::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data());
}

bool Native::Password::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Native::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Password::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Native::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption")
        return true;
    return false;
}

Native::Password::Encryption::Encryption()
    :
    aes{YType::empty, "aes"}
{

    yang_name = "encryption"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Password::Encryption::~Encryption()
{
}

bool Native::Password::Encryption::has_data() const
{
    return aes.is_set;
}

bool Native::Password::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aes.yfilter);
}

std::string Native::Password::Encryption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Password::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Password::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aes.is_set || is_set(aes.yfilter)) leaf_name_data.push_back(aes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Password::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Password::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Password::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aes")
    {
        aes = value;
        aes.value_namespace = name_space;
        aes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Password::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aes")
    {
        aes.yfilter = yfilter;
    }
}

bool Native::Password::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}

Native::Performance::Performance()
    :
    monitor(std::make_shared<Native::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Performance::~Performance()
{
}

bool Native::Performance::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Performance::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Performance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Performance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Performance::Monitor::Monitor()
    :
    observation_point(std::make_shared<Native::Performance::Monitor::ObservationPoint>())
{
    observation_point->parent = this;

    yang_name = "monitor"; yang_parent_name = "performance"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Performance::Monitor::~Monitor()
{
}

bool Native::Performance::Monitor::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return (observation_point !=  nullptr && observation_point->has_data());
}

bool Native::Performance::Monitor::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (observation_point !=  nullptr && observation_point->has_operation());
}

std::string Native::Performance::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Performance::Monitor::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    if(child_yang_name == "observation-point")
    {
        if(observation_point == nullptr)
        {
            observation_point = std::make_shared<Native::Performance::Monitor::ObservationPoint>();
        }
        return observation_point;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    if(observation_point != nullptr)
    {
        children["observation-point"] = observation_point;
    }

    return children;
}

void Native::Performance::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context" || name == "observation-point")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Context()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    profile{YType::enumeration, "profile"}
    	,
    default_(std::make_shared<Native::Performance::Monitor::Context::Default_>())
	,exporter(std::make_shared<Native::Performance::Monitor::Context::Exporter>())
	,traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>())
{
    default_->parent = this;
    exporter->parent = this;
    traffic_monitor->parent = this;

    yang_name = "context"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Performance::Monitor::Context::~Context()
{
}

bool Native::Performance::Monitor::Context::has_data() const
{
    return name.is_set
	|| description.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Performance::Monitor::Context::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(exporter != nullptr)
    {
        children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        children["traffic-monitor"] = traffic_monitor;
    }

    return children;
}

void Native::Performance::Monitor::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "exporter" || name == "traffic-monitor" || name == "name" || name == "description" || name == "profile")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    exporter(std::make_shared<Native::Performance::Monitor::Context::Default_::Exporter>())
	,traffic_monitor(std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor>())
{
    exporter->parent = this;
    traffic_monitor->parent = this;

    yang_name = "default"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::~Default_()
{
}

bool Native::Performance::Monitor::Context::Default_::has_data() const
{
    return description.is_set
	|| (exporter !=  nullptr && exporter->has_data())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_data());
}

bool Native::Performance::Monitor::Context::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (exporter !=  nullptr && exporter->has_operation())
	|| (traffic_monitor !=  nullptr && traffic_monitor->has_operation());
}

std::string Native::Performance::Monitor::Context::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exporter")
    {
        if(exporter == nullptr)
        {
            exporter = std::make_shared<Native::Performance::Monitor::Context::Default_::Exporter>();
        }
        return exporter;
    }

    if(child_yang_name == "traffic-monitor")
    {
        if(traffic_monitor == nullptr)
        {
            traffic_monitor = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor>();
        }
        return traffic_monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exporter != nullptr)
    {
        children["exporter"] = exporter;
    }

    if(traffic_monitor != nullptr)
    {
        children["traffic-monitor"] = traffic_monitor;
    }

    return children;
}

void Native::Performance::Monitor::Context::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exporter" || name == "traffic-monitor" || name == "description")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    port{YType::uint16, "port"},
    source{YType::str, "source"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{

    yang_name = "exporter"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Default_::Exporter::has_data() const
{
    return destination.is_set
	|| port.is_set
	|| source.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Default_::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "port" || name == "source" || name == "transport" || name == "vrf")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
	,application_client_server_stats(nullptr) // presence node
	,application_response_time(nullptr) // presence node
	,application_stats(nullptr) // presence node
	,application_traffic_stats(nullptr) // presence node
	,conversation_traffic_stats(nullptr) // presence node
	,media(nullptr) // presence node
	,url(nullptr) // presence node
{

    yang_name = "traffic-monitor"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(application_client_server_stats != nullptr)
    {
        children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_response_time != nullptr)
    {
        children["application-response-time"] = application_response_time;
    }

    if(application_stats != nullptr)
    {
        children["application-stats"] = application_stats;
    }

    if(application_traffic_stats != nullptr)
    {
        children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "application-client-server-stats" || name == "application-response-time" || name == "application-stats" || name == "application-traffic-stats" || name == "conversation-traffic-stats" || name == "media" || name == "url")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "all"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-and" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "media"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| egress.is_set
	|| ingress.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "egress" || name == "ingress" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{

    yang_name = "url"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sampling_rate.yfilter);
}

std::string Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.yfilter)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
        sampling_rate.value_namespace = name_space;
        sampling_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "ipv4" || name == "ipv6" || name == "sampling-rate")
        return true;
    return false;
}

Native::Performance::Monitor::Context::Exporter::Exporter()
    :
    destination{YType::str, "destination"},
    port{YType::uint16, "port"},
    source{YType::str, "source"},
    transport{YType::enumeration, "transport"},
    vrf{YType::str, "vrf"}
{

    yang_name = "exporter"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::Exporter::~Exporter()
{
}

bool Native::Performance::Monitor::Context::Exporter::has_data() const
{
    return destination.is_set
	|| port.is_set
	|| source.is_set
	|| transport.is_set
	|| vrf.is_set;
}

bool Native::Performance::Monitor::Context::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Performance::Monitor::Context::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "port" || name == "source" || name == "transport" || name == "vrf")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::TrafficMonitor()
    :
    all(nullptr) // presence node
	,application_client_server_stats(nullptr) // presence node
	,application_response_time(nullptr) // presence node
	,application_stats(nullptr) // presence node
	,application_traffic_stats(nullptr) // presence node
	,conversation_traffic_stats(nullptr) // presence node
	,media(nullptr) // presence node
	,url(nullptr) // presence node
{

    yang_name = "traffic-monitor"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::~TrafficMonitor()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_data())
	|| (application_response_time !=  nullptr && application_response_time->has_data())
	|| (application_stats !=  nullptr && application_stats->has_data())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_data())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_data())
	|| (media !=  nullptr && media->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (application_client_server_stats !=  nullptr && application_client_server_stats->has_operation())
	|| (application_response_time !=  nullptr && application_response_time->has_operation())
	|| (application_stats !=  nullptr && application_stats->has_operation())
	|| (application_traffic_stats !=  nullptr && application_traffic_stats->has_operation())
	|| (conversation_traffic_stats !=  nullptr && conversation_traffic_stats->has_operation())
	|| (media !=  nullptr && media->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::All>();
        }
        return all;
    }

    if(child_yang_name == "application-client-server-stats")
    {
        if(application_client_server_stats == nullptr)
        {
            application_client_server_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats>();
        }
        return application_client_server_stats;
    }

    if(child_yang_name == "application-response-time")
    {
        if(application_response_time == nullptr)
        {
            application_response_time = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime>();
        }
        return application_response_time;
    }

    if(child_yang_name == "application-stats")
    {
        if(application_stats == nullptr)
        {
            application_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats>();
        }
        return application_stats;
    }

    if(child_yang_name == "application-traffic-stats")
    {
        if(application_traffic_stats == nullptr)
        {
            application_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats>();
        }
        return application_traffic_stats;
    }

    if(child_yang_name == "conversation-traffic-stats")
    {
        if(conversation_traffic_stats == nullptr)
        {
            conversation_traffic_stats = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats>();
        }
        return conversation_traffic_stats;
    }

    if(child_yang_name == "media")
    {
        if(media == nullptr)
        {
            media = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Media>();
        }
        return media;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::Performance::Monitor::Context::TrafficMonitor::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(application_client_server_stats != nullptr)
    {
        children["application-client-server-stats"] = application_client_server_stats;
    }

    if(application_response_time != nullptr)
    {
        children["application-response-time"] = application_response_time;
    }

    if(application_stats != nullptr)
    {
        children["application-stats"] = application_stats;
    }

    if(application_traffic_stats != nullptr)
    {
        children["application-traffic-stats"] = application_traffic_stats;
    }

    if(conversation_traffic_stats != nullptr)
    {
        children["conversation-traffic-stats"] = conversation_traffic_stats;
    }

    if(media != nullptr)
    {
        children["media"] = media;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Performance::Monitor::Context::TrafficMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "application-client-server-stats" || name == "application-response-time" || name == "application-stats" || name == "application-traffic-stats" || name == "conversation-traffic-stats" || name == "media" || name == "url")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::All::All()
    :
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "all"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::All::~All()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::ApplicationClientServerStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-client-server-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::~ApplicationClientServerStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-client-server-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::ApplicationResponseTime()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "application-response-time"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::~ApplicationResponseTime()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-response-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-and" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::ApplicationStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::~ApplicationStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::ApplicationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"}
{

    yang_name = "application-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::~ApplicationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-replace" || name == "interval-timeout")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::ConversationTrafficStats()
    :
    cache_size{YType::uint32, "cache-size"},
    cache_type{YType::enumeration, "cache-type"},
    class_replace{YType::str, "class-replace"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "conversation-traffic-stats"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::~ConversationTrafficStats()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_data() const
{
    return cache_size.is_set
	|| cache_type.is_set
	|| class_replace.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(cache_type.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conversation-traffic-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (cache_type.is_set || is_set(cache_type.yfilter)) leaf_name_data.push_back(cache_type.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-type")
    {
        cache_type = value;
        cache_type.value_namespace = name_space;
        cache_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "cache-type")
    {
        cache_type.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "cache-type" || name == "class-replace" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::Media()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"},
    interval_timeout{YType::uint32, "interval-timeout"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "media"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::Media::~Media()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| egress.is_set
	|| ingress.is_set
	|| interval_timeout.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(egress.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(interval_timeout.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Media::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::Media::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (interval_timeout.is_set || is_set(interval_timeout.yfilter)) leaf_name_data.push_back(interval_timeout.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Media::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Media::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout = value;
        interval_timeout.value_namespace = name_space;
        interval_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::Media::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "interval-timeout")
    {
        interval_timeout.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Media::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "egress" || name == "ingress" || name == "interval-timeout" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::Url()
    :
    cache_size{YType::uint32, "cache-size"},
    class_and{YType::str, "class-and"},
    class_replace{YType::str, "class-replace"},
    ipv4{YType::empty, "ipv4"},
    ipv6{YType::empty, "ipv6"},
    sampling_rate{YType::uint32, "sampling-rate"}
{

    yang_name = "url"; yang_parent_name = "traffic-monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Performance::Monitor::Context::TrafficMonitor::Url::~Url()
{
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_data() const
{
    return cache_size.is_set
	|| class_and.is_set
	|| class_replace.is_set
	|| ipv4.is_set
	|| ipv6.is_set
	|| sampling_rate.is_set;
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache_size.yfilter)
	|| ydk::is_set(class_and.yfilter)
	|| ydk::is_set(class_replace.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(sampling_rate.yfilter);
}

std::string Native::Performance::Monitor::Context::TrafficMonitor::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::Context::TrafficMonitor::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_size.is_set || is_set(cache_size.yfilter)) leaf_name_data.push_back(cache_size.get_name_leafdata());
    if (class_and.is_set || is_set(class_and.yfilter)) leaf_name_data.push_back(class_and.get_name_leafdata());
    if (class_replace.is_set || is_set(class_replace.yfilter)) leaf_name_data.push_back(class_replace.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (sampling_rate.is_set || is_set(sampling_rate.yfilter)) leaf_name_data.push_back(sampling_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::Context::TrafficMonitor::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::Context::TrafficMonitor::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache-size")
    {
        cache_size = value;
        cache_size.value_namespace = name_space;
        cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-and")
    {
        class_and = value;
        class_and.value_namespace = name_space;
        class_and.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-replace")
    {
        class_replace = value;
        class_replace.value_namespace = name_space;
        class_replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate = value;
        sampling_rate.value_namespace = name_space;
        sampling_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::Context::TrafficMonitor::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache-size")
    {
        cache_size.yfilter = yfilter;
    }
    if(value_path == "class-and")
    {
        class_and.yfilter = yfilter;
    }
    if(value_path == "class-replace")
    {
        class_replace.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "sampling-rate")
    {
        sampling_rate.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::Context::TrafficMonitor::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-size" || name == "class-and" || name == "class-replace" || name == "ipv4" || name == "ipv6" || name == "sampling-rate")
        return true;
    return false;
}

Native::Performance::Monitor::ObservationPoint::ObservationPoint()
    :
    encrypted_text{YType::empty, "encrypted-text"}
{

    yang_name = "observation-point"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Performance::Monitor::ObservationPoint::~ObservationPoint()
{
}

bool Native::Performance::Monitor::ObservationPoint::has_data() const
{
    return encrypted_text.is_set;
}

bool Native::Performance::Monitor::ObservationPoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypted_text.yfilter);
}

std::string Native::Performance::Monitor::ObservationPoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/performance/Cisco-IOS-XE-ezpm:monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Performance::Monitor::ObservationPoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation-point";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Performance::Monitor::ObservationPoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypted_text.is_set || is_set(encrypted_text.yfilter)) leaf_name_data.push_back(encrypted_text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Performance::Monitor::ObservationPoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Performance::Monitor::ObservationPoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Performance::Monitor::ObservationPoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encrypted-text")
    {
        encrypted_text = value;
        encrypted_text.value_namespace = name_space;
        encrypted_text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Performance::Monitor::ObservationPoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encrypted-text")
    {
        encrypted_text.yfilter = yfilter;
    }
}

bool Native::Performance::Monitor::ObservationPoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypted-text")
        return true;
    return false;
}

Native::Pfr::Pfr()
    :
    border(nullptr) // presence node
	,master(nullptr) // presence node
{

    yang_name = "pfr"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::~Pfr()
{
}

bool Native::Pfr::has_data() const
{
    return (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Border>();
        }
        return border;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "master")
        return true;
    return false;
}

Native::Pfr::Border::Border()
    :
    pfr_mode__config_pfr_br(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>())
{
    pfr_mode__config_pfr_br->parent = this;

    yang_name = "border"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::~Border()
{
}

bool Native::Pfr::Border::has_data() const
{
    return (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_data());
}

bool Native::Pfr::Border::has_operation() const
{
    return is_set(yfilter)
	|| (pfr_mode__config_pfr_br !=  nullptr && pfr_mode__config_pfr_br->has_operation());
}

std::string Native::Pfr::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-Mode__config-pfr-br")
    {
        if(pfr_mode__config_pfr_br == nullptr)
        {
            pfr_mode__config_pfr_br = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr>();
        }
        return pfr_mode__config_pfr_br;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pfr_mode__config_pfr_br != nullptr)
    {
        children["pfr-Mode__config-pfr-br"] = pfr_mode__config_pfr_br;
    }

    return children;
}

void Native::Pfr::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-Mode__config-pfr-br")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::PfrModeConfigpfrbr()
    :
    logging{YType::empty, "logging"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"}
    	,
    active_probe(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>())
	,local(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>())
	,master(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>())
{
    active_probe->parent = this;
    local->parent = this;
    master->parent = this;

    yang_name = "pfr-Mode__config-pfr-br"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::~PfrModeConfigpfrbr()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_data() const
{
    return logging.is_set
	|| port.is_set
	|| shutdown.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-Mode__config-pfr-br";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local>();
        }
        return local;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(master != nullptr)
    {
        children["master"] = master;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "local" || name == "master" || name == "logging" || name == "port" || name == "shutdown")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::ActiveProbe()
    :
    address(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>())
{
    address->parent = this;

    yang_name = "active-probe"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Address()
    :
    source(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>())
{
    source->parent = this;

    yang_name = "address"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::~Address()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_data() const
{
    return (source !=  nullptr && source->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Source()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>())
{
    interface->parent = this;

    yang_name = "source"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::~Source()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/active-probe/address/source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::ActiveProbe::Address::Source::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Local()
    :
    interface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>())
{
    interface->parent = this;

    yang_name = "local"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::~Local()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::~Interface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/local/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Local::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Master()
{

    yang_name = "master"; yang_parent_name = "pfr-Mode__config-pfr-br"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::~Master()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    key_chain{YType::str, "key-chain"}
{

    yang_name = "ipv4"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_data() const
{
    return ipv4.is_set
	|| key_chain.is_set;
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(key_chain.yfilter);
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:border/pfr-Mode__config-pfr-br/master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Pfr::Border::PfrModeConfigpfrbr::Master::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "key-chain")
        return true;
    return false;
}

Native::Pfr::Master::Master()
    :
    icmp_mode_config_pfr_mc(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>())
{
    icmp_mode_config_pfr_mc->parent = this;

    yang_name = "master"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::~Master()
{
}

bool Native::Pfr::Master::has_data() const
{
    return (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_data());
}

bool Native::Pfr::Master::has_operation() const
{
    return is_set(yfilter)
	|| (icmp_mode_config_pfr_mc !=  nullptr && icmp_mode_config_pfr_mc->has_operation());
}

std::string Native::Pfr::Master::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-Mode-config-pfr-mc")
    {
        if(icmp_mode_config_pfr_mc == nullptr)
        {
            icmp_mode_config_pfr_mc = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc>();
        }
        return icmp_mode_config_pfr_mc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(icmp_mode_config_pfr_mc != nullptr)
    {
        children["icmp-Mode-config-pfr-mc"] = icmp_mode_config_pfr_mc;
    }

    return children;
}

void Native::Pfr::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-Mode-config-pfr-mc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::IcmpModeConfigPfrMc()
    :
    bandwidth_resolution{YType::empty, "bandwidth-resolution"},
    exporter{YType::str, "exporter"},
    holddown{YType::uint16, "holddown"},
    keepalive{YType::uint16, "keepalive"},
    logging{YType::empty, "logging"},
    periodic{YType::uint16, "periodic"},
    policy_rules{YType::str, "policy-rules"},
    port{YType::uint16, "port"},
    shutdown{YType::empty, "shutdown"},
    trigger_log_percentage{YType::uint8, "trigger-log-percentage"}
    	,
    active_probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>())
	,application(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>())
	,backoff(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>())
	,border(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>())
	,delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>())
	,learn(nullptr) // presence node
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>())
	,max(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>())
	,max_range_utilization(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>())
	,mc_peer(nullptr) // presence node
	,mode(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>())
	,probe(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>())
	,resolve(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>())
	,rsvp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>())
	,target_discovery(nullptr) // presence node
	,traceroute(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>())
	,unreachable(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>())
{
    active_probe->parent = this;
    application->parent = this;
    backoff->parent = this;
    border->parent = this;
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    max->parent = this;
    max_range_utilization->parent = this;
    mode->parent = this;
    mos->parent = this;
    probe->parent = this;
    resolve->parent = this;
    rsvp->parent = this;
    traceroute->parent = this;
    unreachable->parent = this;

    yang_name = "icmp-Mode-config-pfr-mc"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::~IcmpModeConfigPfrMc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_data() const
{
    return bandwidth_resolution.is_set
	|| exporter.is_set
	|| holddown.is_set
	|| keepalive.is_set
	|| logging.is_set
	|| periodic.is_set
	|| policy_rules.is_set
	|| port.is_set
	|| shutdown.is_set
	|| trigger_log_percentage.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (border !=  nullptr && border->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (learn !=  nullptr && learn->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (max !=  nullptr && max->has_data())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_data())
	|| (mc_peer !=  nullptr && mc_peer->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mos !=  nullptr && mos->has_data())
	|| (probe !=  nullptr && probe->has_data())
	|| (resolve !=  nullptr && resolve->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (target_discovery !=  nullptr && target_discovery->has_data())
	|| (traceroute !=  nullptr && traceroute->has_data())
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_resolution.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(policy_rules.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (border !=  nullptr && border->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (learn !=  nullptr && learn->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (max !=  nullptr && max->has_operation())
	|| (max_range_utilization !=  nullptr && max_range_utilization->has_operation())
	|| (mc_peer !=  nullptr && mc_peer->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mos !=  nullptr && mos->has_operation())
	|| (probe !=  nullptr && probe->has_operation())
	|| (resolve !=  nullptr && resolve->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (target_discovery !=  nullptr && target_discovery->has_operation())
	|| (traceroute !=  nullptr && traceroute->has_operation())
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-Mode-config-pfr-mc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_resolution.is_set || is_set(bandwidth_resolution.yfilter)) leaf_name_data.push_back(bandwidth_resolution.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (policy_rules.is_set || is_set(policy_rules.yfilter)) leaf_name_data.push_back(policy_rules.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application>();
        }
        return application;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border>();
        }
        return border;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "learn")
    {
        if(learn == nullptr)
        {
            learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn>();
        }
        return learn;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "max")
    {
        if(max == nullptr)
        {
            max = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max>();
        }
        return max;
    }

    if(child_yang_name == "max-range-utilization")
    {
        if(max_range_utilization == nullptr)
        {
            max_range_utilization = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization>();
        }
        return max_range_utilization;
    }

    if(child_yang_name == "mc-peer")
    {
        if(mc_peer == nullptr)
        {
            mc_peer = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer>();
        }
        return mc_peer;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos>();
        }
        return mos;
    }

    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Probe>();
        }
        return probe;
    }

    if(child_yang_name == "resolve")
    {
        if(resolve == nullptr)
        {
            resolve = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve>();
        }
        return resolve;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "target-discovery")
    {
        if(target_discovery == nullptr)
        {
            target_discovery = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery>();
        }
        return target_discovery;
    }

    if(child_yang_name == "traceroute")
    {
        if(traceroute == nullptr)
        {
            traceroute = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute>();
        }
        return traceroute;
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(border != nullptr)
    {
        children["border"] = border;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(learn != nullptr)
    {
        children["learn"] = learn;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(max != nullptr)
    {
        children["max"] = max;
    }

    if(max_range_utilization != nullptr)
    {
        children["max-range-utilization"] = max_range_utilization;
    }

    if(mc_peer != nullptr)
    {
        children["mc-peer"] = mc_peer;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    if(resolve != nullptr)
    {
        children["resolve"] = resolve;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(target_discovery != nullptr)
    {
        children["target-discovery"] = target_discovery;
    }

    if(traceroute != nullptr)
    {
        children["traceroute"] = traceroute;
    }

    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution = value;
        bandwidth_resolution.value_namespace = name_space;
        bandwidth_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-rules")
    {
        policy_rules = value;
        policy_rules.value_namespace = name_space;
        policy_rules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-resolution")
    {
        bandwidth_resolution.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "policy-rules")
    {
        policy_rules.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "application" || name == "backoff" || name == "border" || name == "delay" || name == "jitter" || name == "learn" || name == "loss" || name == "max" || name == "max-range-utilization" || name == "mc-peer" || name == "mode" || name == "mos" || name == "probe" || name == "resolve" || name == "rsvp" || name == "target-discovery" || name == "traceroute" || name == "unreachable" || name == "bandwidth-resolution" || name == "exporter" || name == "holddown" || name == "keepalive" || name == "logging" || name == "periodic" || name == "policy-rules" || name == "port" || name == "shutdown" || name == "trigger-log-percentage")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::ActiveProbe()
    :
    echo{YType::str, "echo"}
    	,
    jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>())
{
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::~ActiveProbe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_data() const
{
    return echo.is_set
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(echo.yfilter)
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jitter" || name == "tcp-conn" || name == "udp-echo" || name == "echo")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Jitter()
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::TcpConn()
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/tcp-conn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::UdpEcho()
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::uint16, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/active-probe/udp-echo/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Application()
    :
    define(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>())
{
    define->parent = this;

    yang_name = "application"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::~Application()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_data() const
{
    return (define !=  nullptr && define->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_operation() const
{
    return is_set(yfilter)
	|| (define !=  nullptr && define->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "define")
    {
        if(define == nullptr)
        {
            define = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define>();
        }
        return define;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(define != nullptr)
    {
        children["define"] = define;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "define")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::Define()
{

    yang_name = "define"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::~Define()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_data() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_operation() const
{
    for (std::size_t index=0; index<app_def.size(); index++)
    {
        if(app_def[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "define";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app-def")
    {
        for(auto const & c : app_def)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef>();
        c->parent = this;
        app_def.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : app_def)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::AppDef()
    :
    app_def{YType::str, "app-def"},
    access_list{YType::str, "access-list"},
    nbar{YType::empty, "nbar"}
{

    yang_name = "app-def"; yang_parent_name = "define"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::~AppDef()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_data() const
{
    return app_def.is_set
	|| access_list.is_set
	|| nbar.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_def.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(nbar.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/application/define/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app-def" <<"[app-def='" <<app_def <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_def.is_set || is_set(app_def.yfilter)) leaf_name_data.push_back(app_def.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (nbar.is_set || is_set(nbar.yfilter)) leaf_name_data.push_back(nbar.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-def")
    {
        app_def = value;
        app_def.value_namespace = name_space;
        app_def.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbar")
    {
        nbar = value;
        nbar.value_namespace = name_space;
        nbar.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-def")
    {
        app_def.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "nbar")
    {
        nbar.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Application::Define::AppDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-def" || name == "access-list" || name == "nbar")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Backoff()
{

    yang_name = "backoff"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::~Backoff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff.size(); index++)
    {
        if(boff[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff")
    {
        for(auto const & c : boff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff>();
        c->parent = this;
        boff.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff()
    :
    boff{YType::uint16, "boff"}
{

    yang_name = "boff"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::~Boff()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_data() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_data())
            return true;
    }
    return boff.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_operation() const
{
    for (std::size_t index=0; index<boff0.size(); index++)
    {
        if(boff0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/backoff/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff" <<"[boff='" <<boff <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff.is_set || is_set(boff.yfilter)) leaf_name_data.push_back(boff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff0")
    {
        for(auto const & c : boff0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0>();
        c->parent = this;
        boff0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff")
    {
        boff = value;
        boff.value_namespace = name_space;
        boff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff")
    {
        boff.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "boff")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::Boff0()
    :
    boff0{YType::uint16, "boff0"},
    bstep{YType::uint16, "bstep"}
{

    yang_name = "boff0"; yang_parent_name = "boff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::~Boff0()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_data() const
{
    return boff0.is_set
	|| bstep.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff0.yfilter)
	|| ydk::is_set(bstep.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff0" <<"[boff0='" <<boff0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff0.is_set || is_set(boff0.yfilter)) leaf_name_data.push_back(boff0.get_name_leafdata());
    if (bstep.is_set || is_set(bstep.yfilter)) leaf_name_data.push_back(bstep.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff0")
    {
        boff0 = value;
        boff0.value_namespace = name_space;
        boff0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstep")
    {
        bstep = value;
        bstep.value_namespace = name_space;
        bstep.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff0")
    {
        boff0.yfilter = yfilter;
    }
    if(value_path == "bstep")
    {
        bstep.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Backoff::Boff::Boff0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff0" || name == "bstep")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Border()
{

    yang_name = "border"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::~Border()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::empty, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_data() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_data())
            return true;
    }
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<key_chain.size(); index++)
    {
        if(key_chain[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/border/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        for(auto const & c : key_chain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain>();
        c->parent = this;
        key_chain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::KeyChain()
    :
    kc_name{YType::str, "kc-name"},
    interface{YType::empty, "interface"}
{

    yang_name = "key-chain"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::~KeyChain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_data() const
{
    return kc_name.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kc_name.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain" <<"[kc-name='" <<kc_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kc_name.is_set || is_set(kc_name.yfilter)) leaf_name_data.push_back(kc_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kc-name")
    {
        kc_name = value;
        kc_name.value_namespace = name_space;
        kc_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kc-name")
    {
        kc_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Border::Ipv4::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kc-name" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::Delay()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::Jitter()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "jitter"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_data() const
{
    return threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::Learn()
    :
    lrn_mode__config_pfr_mc_learn(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>())
{
    lrn_mode__config_pfr_mc_learn->parent = this;

    yang_name = "learn"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::~Learn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_data() const
{
    return (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_operation() const
{
    return is_set(yfilter)
	|| (lrn_mode__config_pfr_mc_learn !=  nullptr && lrn_mode__config_pfr_mc_learn->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lrn-Mode__config-pfr-mc-learn")
    {
        if(lrn_mode__config_pfr_mc_learn == nullptr)
        {
            lrn_mode__config_pfr_mc_learn = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn>();
        }
        return lrn_mode__config_pfr_mc_learn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lrn_mode__config_pfr_mc_learn != nullptr)
    {
        children["lrn-Mode__config-pfr-mc-learn"] = lrn_mode__config_pfr_mc_learn;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lrn-Mode__config-pfr-mc-learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::LrnModeConfigpfrmclearn()
    :
    delay{YType::empty, "delay"},
    monitor_period{YType::uint16, "monitor-period"},
    periodic_interval{YType::uint16, "periodic-interval"},
    throughput{YType::empty, "throughput"}
    	,
    aggregation_type(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>())
	,expire(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>())
	,inside(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>())
	,list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>())
	,prefixes(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>())
	,traffic_class(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>())
{
    aggregation_type->parent = this;
    expire->parent = this;
    inside->parent = this;
    list->parent = this;
    prefixes->parent = this;
    traffic_class->parent = this;

    yang_name = "lrn-Mode__config-pfr-mc-learn"; yang_parent_name = "learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::~LrnModeConfigpfrmclearn()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_data() const
{
    return delay.is_set
	|| monitor_period.is_set
	|| periodic_interval.is_set
	|| throughput.is_set
	|| (aggregation_type !=  nullptr && aggregation_type->has_data())
	|| (expire !=  nullptr && expire->has_data())
	|| (inside !=  nullptr && inside->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(monitor_period.yfilter)
	|| ydk::is_set(periodic_interval.yfilter)
	|| ydk::is_set(throughput.yfilter)
	|| (aggregation_type !=  nullptr && aggregation_type->has_operation())
	|| (expire !=  nullptr && expire->has_operation())
	|| (inside !=  nullptr && inside->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lrn-Mode__config-pfr-mc-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (monitor_period.is_set || is_set(monitor_period.yfilter)) leaf_name_data.push_back(monitor_period.get_name_leafdata());
    if (periodic_interval.is_set || is_set(periodic_interval.yfilter)) leaf_name_data.push_back(periodic_interval.get_name_leafdata());
    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregation-type")
    {
        if(aggregation_type == nullptr)
        {
            aggregation_type = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType>();
        }
        return aggregation_type;
    }

    if(child_yang_name == "expire")
    {
        if(expire == nullptr)
        {
            expire = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire>();
        }
        return expire;
    }

    if(child_yang_name == "inside")
    {
        if(inside == nullptr)
        {
            inside = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside>();
        }
        return inside;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List>();
        }
        return list;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregation_type != nullptr)
    {
        children["aggregation-type"] = aggregation_type;
    }

    if(expire != nullptr)
    {
        children["expire"] = expire;
    }

    if(inside != nullptr)
    {
        children["inside"] = inside;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor-period")
    {
        monitor_period = value;
        monitor_period.value_namespace = name_space;
        monitor_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval = value;
        periodic_interval.value_namespace = name_space;
        periodic_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "monitor-period")
    {
        monitor_period.yfilter = yfilter;
    }
    if(value_path == "periodic-interval")
    {
        periodic_interval.yfilter = yfilter;
    }
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregation-type" || name == "expire" || name == "inside" || name == "list" || name == "prefixes" || name == "traffic-class" || name == "delay" || name == "monitor-period" || name == "periodic-interval" || name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::AggregationType()
    :
    bgp{YType::empty, "bgp"},
    non_bgp{YType::empty, "non-bgp"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "aggregation-type"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::~AggregationType()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_data() const
{
    return bgp.is_set
	|| non_bgp.is_set
	|| prefix_length.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(non_bgp.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregation-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (non_bgp.is_set || is_set(non_bgp.yfilter)) leaf_name_data.push_back(non_bgp.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-bgp")
    {
        non_bgp = value;
        non_bgp.value_namespace = name_space;
        non_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "non-bgp")
    {
        non_bgp.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::AggregationType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "non-bgp" || name == "prefix-length")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::Expire()
    :
    after(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>())
{
    after->parent = this;

    yang_name = "expire"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::~Expire()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_data() const
{
    return (after !=  nullptr && after->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_operation() const
{
    return is_set(yfilter)
	|| (after !=  nullptr && after->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "after")
    {
        if(after == nullptr)
        {
            after = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After>();
        }
        return after;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(after != nullptr)
    {
        children["after"] = after;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::After()
    :
    session{YType::uint16, "session"},
    time{YType::uint16, "time"}
{

    yang_name = "after"; yang_parent_name = "expire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::~After()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_data() const
{
    return session.is_set
	|| time.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/expire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "after";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.yfilter)) leaf_name_data.push_back(session.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session")
    {
        session = value;
        session.value_namespace = name_space;
        session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session")
    {
        session.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Expire::After::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "time")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::Inside()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "inside"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::~Inside()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_data() const
{
    return bgp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inside";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Inside::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::List()
    :
    seq(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>())
{
    seq->parent = this;

    yang_name = "list"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::~List()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_data() const
{
    return (seq !=  nullptr && seq->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_operation() const
{
    return is_set(yfilter)
	|| (seq !=  nullptr && seq->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "seq")
    {
        if(seq == nullptr)
        {
            seq = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq>();
        }
        return seq;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(seq != nullptr)
    {
        children["seq"] = seq;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::Seq()
{

    yang_name = "seq"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::~Seq()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_data() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_operation() const
{
    for (std::size_t index=0; index<pfr_tc.size(); index++)
    {
        if(pfr_tc[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfr-tc")
    {
        for(auto const & c : pfr_tc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc>();
        c->parent = this;
        pfr_tc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pfr_tc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::PfrTc()
    :
    pfr_tc{YType::uint16, "pfr-tc"},
    refname{YType::empty, "refname"}
{

    yang_name = "pfr-tc"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::~PfrTc()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_data() const
{
    return pfr_tc.is_set
	|| refname.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tc.yfilter)
	|| ydk::is_set(refname.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/list/seq/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-tc" <<"[pfr-tc='" <<pfr_tc <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tc.is_set || is_set(pfr_tc.yfilter)) leaf_name_data.push_back(pfr_tc.get_name_leafdata());
    if (refname.is_set || is_set(refname.yfilter)) leaf_name_data.push_back(refname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc = value;
        pfr_tc.value_namespace = name_space;
        pfr_tc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refname")
    {
        refname = value;
        refname.value_namespace = name_space;
        refname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tc")
    {
        pfr_tc.yfilter = yfilter;
    }
    if(value_path == "refname")
    {
        refname.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::List::Seq::PfrTc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfr-tc" || name == "refname")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prefixes()
{

    yang_name = "prefixes"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::~Prefixes()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_data() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prnum.size(); index++)
    {
        if(prnum[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prnum")
    {
        for(auto const & c : prnum)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum>();
        c->parent = this;
        prnum.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prnum)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::Prnum()
    :
    prnum{YType::uint32, "prnum"},
    applications{YType::uint16, "applications"}
{

    yang_name = "prnum"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::~Prnum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_data() const
{
    return prnum.is_set
	|| applications.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prnum.yfilter)
	|| ydk::is_set(applications.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/prefixes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prnum" <<"[prnum='" <<prnum <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prnum.is_set || is_set(prnum.yfilter)) leaf_name_data.push_back(prnum.get_name_leafdata());
    if (applications.is_set || is_set(applications.yfilter)) leaf_name_data.push_back(applications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prnum")
    {
        prnum = value;
        prnum.value_namespace = name_space;
        prnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "applications")
    {
        applications = value;
        applications.value_namespace = name_space;
        applications.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prnum")
    {
        prnum.yfilter = yfilter;
    }
    if(value_path == "applications")
    {
        applications.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::Prefixes::Prnum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prnum" || name == "applications")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::TrafficClass()
    :
    aggregate(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate>())
	,filter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter>())
	,keys(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys>())
{
    aggregate->parent = this;
    filter->parent = this;
    keys->parent = this;

    yang_name = "traffic-class"; yang_parent_name = "lrn-Mode__config-pfr-mc-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::~TrafficClass()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (keys !=  nullptr && keys->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (keys !=  nullptr && keys->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "keys")
    {
        if(keys == nullptr)
        {
            keys = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys>();
        }
        return keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(keys != nullptr)
    {
        children["keys"] = keys;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate" || name == "filter" || name == "keys")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::Aggregate()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "aggregate"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::~Aggregate()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::Filter()
    :
    access_list{YType::str, "access-list"}
{

    yang_name = "filter"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::~Filter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_data() const
{
    return access_list.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Keys()
    :
    dport(nullptr) // presence node
	,dscp(nullptr) // presence node
	,protocol(nullptr) // presence node
	,sport(nullptr) // presence node
{

    yang_name = "keys"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::~Keys()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_data() const
{
    return (dport !=  nullptr && dport->has_data())
	|| (dscp !=  nullptr && dscp->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_operation() const
{
    return is_set(yfilter)
	|| (dport !=  nullptr && dport->has_operation())
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dport")
    {
        if(dport == nullptr)
        {
            dport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport>();
        }
        return dport;
    }

    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dport != nullptr)
    {
        children["dport"] = dport;
    }

    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::Dport()
    :
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{

    yang_name = "dport"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::~Dport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_data() const
{
    return dscp.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::Dscp()
    :
    dport{YType::empty, "dport"},
    protocol{YType::empty, "protocol"},
    sport{YType::empty, "sport"}
{

    yang_name = "dscp"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::~Dscp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_data() const
{
    return dport.is_set
	|| protocol.is_set
	|| sport.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(sport.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (sport.is_set || is_set(sport.yfilter)) leaf_name_data.push_back(sport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sport")
    {
        sport = value;
        sport.value_namespace = name_space;
        sport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "sport")
    {
        sport.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "protocol" || name == "sport")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Protocol()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
    	,
    sport(nullptr) // presence node
{

    yang_name = "protocol"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| (sport !=  nullptr && sport->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (sport !=  nullptr && sport->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sport")
    {
        if(sport == nullptr)
        {
            sport = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport>();
        }
        return sport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sport != nullptr)
    {
        children["sport"] = sport;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sport" || name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "sport"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Protocol::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::Sport()
    :
    dport{YType::empty, "dport"},
    dscp{YType::empty, "dscp"},
    protocol{YType::empty, "protocol"}
{

    yang_name = "sport"; yang_parent_name = "keys"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::~Sport()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_data() const
{
    return dport.is_set
	|| dscp.is_set
	|| protocol.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dport.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/learn/lrn-Mode__config-pfr-mc-learn/traffic-class/keys/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dport.is_set || is_set(dport.yfilter)) leaf_name_data.push_back(dport.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dport")
    {
        dport = value;
        dport.value_namespace = name_space;
        dport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dport")
    {
        dport.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Learn::LrnModeConfigpfrmclearn::TrafficClass::Keys::Sport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dport" || name == "dscp" || name == "protocol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "loss"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Max()
    :
    prefix(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>())
	,range(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>())
{
    prefix->parent = this;
    range->parent = this;

    yang_name = "max"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::~Max()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_data() const
{
    return (prefix !=  nullptr && prefix->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_operation() const
{
    return is_set(yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "range")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Prefix()
    :
    total(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>())
{
    total->parent = this;

    yang_name = "prefix"; yang_parent_name = "max"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::~Prefix()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_data() const
{
    return (total !=  nullptr && total->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(total != nullptr)
    {
        children["total"] = total;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Total()
{

    yang_name = "total"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::~Total()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_data() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_operation() const
{
    for (std::size_t index=0; index<maxpr.size(); index++)
    {
        if(maxpr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maxpr")
    {
        for(auto const & c : maxpr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr>();
        c->parent = this;
        maxpr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : maxpr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr")
        return true;
    return false;
}

const Enum::YLeaf Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Default_::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::md5 {0, "md5"};
const Enum::YLeaf Native::Otv::Site::Otv_::Isis::Authentication::Mode::text {1, "text"};

const Enum::YLeaf Native::ParameterMap::Name::global {0, "global"};
const Enum::YLeaf Native::ParameterMap::Name::gtp {1, "gtp"};

const Enum::YLeaf Native::ParameterMap::Type::cws_tunnel {0, "cws-tunnel"};
const Enum::YLeaf Native::ParameterMap::Type::inspect {1, "inspect"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_global {2, "inspect-global"};
const Enum::YLeaf Native::ParameterMap::Type::webauth {3, "webauth"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_vrf {4, "inspect-vrf"};
const Enum::YLeaf Native::ParameterMap::Type::inspect_zone {5, "inspect-zone"};
const Enum::YLeaf Native::ParameterMap::Type::regex {6, "regex"};
const Enum::YLeaf Native::ParameterMap::Type::authbypass {7, "authbypass"};

const Enum::YLeaf Native::ParameterMap::ParameterMapType::webauth {0, "webauth"};
const Enum::YLeaf Native::ParameterMap::ParameterMapType::authbypass {1, "authbypass"};

const Enum::YLeaf Native::ParameterMap::Alert::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::Alert::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ApplicationInspect::all {0, "all"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::dns {1, "dns"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::exec {2, "exec"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::ftp {3, "ftp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::gtp {4, "gtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::h323 {5, "h323"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::http {6, "http"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::imap {7, "imap"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::login {8, "login"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::msrpc {9, "msrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::netbios {10, "netbios"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::pop3 {11, "pop3"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::rtsp {12, "rtsp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::shell {13, "shell"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sip {14, "sip"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::skinny {15, "skinny"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::smtp {16, "smtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::sunrpc {17, "sunrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspect::tftp {18, "tftp"};

const Enum::YLeaf Native::ParameterMap::AuditTrail::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::AuditTrail::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ZoneMismatch::drop {0, "drop"};

const Enum::YLeaf Native::Parser::Config::Cache::interface {0, "interface"};

const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_experience {0, "application-experience"};
const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_performance {1, "application-performance"};
const Enum::YLeaf Native::Performance::Monitor::Context::Profile::application_statistics {2, "application-statistics"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::Exporter::Transport::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::Exporter::Transport::udp {0, "udp"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheType::synchronized {1, "synchronized"};

const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType::normal {0, "normal"};
const Enum::YLeaf Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheType::synchronized {1, "synchronized"};


}
}

